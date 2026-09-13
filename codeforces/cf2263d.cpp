#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast")
#pragma GCC target("avx2")
#define ll long long
#define pii pair<ll, ll>
#define inf 0x7fffffff

const ll MM = 2e5+5;
ll bit[MM];

void update(ll idx, ll val){
    for(ll i = idx+1; i < MM; i += i & -i) bit[i] += val;
}

ll query(ll idx){
    ll ans = 0;

    for(ll i = idx+1; i > 0; i -= i & -i){
        ans += bit[i];
    }
    return ans;
}

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    ll t; cin >> t;
    for(ll cases = 0; cases < t; ++cases){
        ll n; cin >> n;
        int a[n+5], p[n+5], nw[n+5]; set<int> boundaries;
        fill(nw, nw+n+5, 0);
        fill(bit, bit + MM, 0);
        boundaries.emplace(-1); boundaries.emplace(n);
        for(int i = 0; i < n; ++i) cin >> a[i];
        for(int i = 0; i < n; ++i){cin >> p[i]; --p[i];}
        vector<int> ans;
        for(int i = n-1; i >= 0; --i){
            update(p[i], a[p[i]]);
            nw[p[i]] = a[p[i]];
            if(query(p[i]-1) - query(*prev(boundaries.lower_bound(p[i]))-1) < nw[p[i]]){
                boundaries.emplace(p[i]);
                int hi = *boundaries.upper_bound(p[i]);
                ll sm = query(hi-1) - query(p[i]-1);
                while(sm >= nw[hi]){
                    if(hi == n) break;
                    boundaries.erase(hi);
                    hi = *boundaries.upper_bound(p[i]);
                    sm = query(hi-1) - query(p[i]-1);
                }
                ans.push_back(max(0, (int)boundaries.size() - 3));
            }else{
                int hi = *boundaries.upper_bound(p[i]);
                int lo = *prev(boundaries.lower_bound(p[i]));
                ll sm = query(hi-1) - query(lo-1);
                while(sm >= nw[hi]){
                    if(hi == n) break;
                    boundaries.erase(hi);
                    hi = *boundaries.upper_bound(p[i]);
                    lo = *prev(boundaries.lower_bound(p[i]));
                    sm = query(hi-1) - query(lo-1);
                }
                ans.push_back(max(0, (int)boundaries.size() - 3));
            }
        }
        for(int i = n-1; i >= 0; --i) cout << ans[i] << " ";
        cout << "\n";
    }
}