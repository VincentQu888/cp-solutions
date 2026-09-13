#include <iostream>
#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#pragma GCC target("avx2")
using namespace std;
#define ll long long
#define pii pair<int, int>
#define pll pair<ll, ll>
#define INF 0x3f3f3f3f
#define LINF 0x3f3f3f3f3f3f3f3f
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    for(int cases = 0; cases < t; ++cases){
        int n, m; cin >> n >> m;
        int a[n];
        if(m == 1){
            ll ans = -LINF;
            for(int i = 0; i < n; ++i){
                cin >> a[i];
                ans = max(ans, (ll)a[i]);
            }
            cout << ans << "\n";
            continue;
        }
        ll ans = -LINF, sm = 0; 
        priority_queue<int> pq;
        for(int i = 0; i < n; ++i){
            cin >> a[i];
            if(i >= m-1){
                ans = max(ans, (ll)a[i]*m-sm);
            }
            if(pq.size() < m-1){
                pq.emplace(a[i]);
                sm += a[i];
            }else if(pq.size() >= m-1 && a[i] < pq.top()){
                sm -= pq.top();
                sm += a[i];
                pq.pop();
                pq.emplace(a[i]);
            }
        }
        cout << ans << "\n";
    }
}
