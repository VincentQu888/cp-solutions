#include <iostream>
#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#pragma GCC target("avx2")
using namespace std;
#define ll long long
#define pii pair<ll, ll>
#define pll pair<ll, ll>
#define INF 0x3f3f3f3f
#define LINF 0x3f3f3f3f3f3f3f3f

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    ll t; cin >> t;
    for(ll cases = 0; cases < t; ++cases){
        ll n; cin >> n;
        ll a[n+5], diff[n+5]; vector<ll> ans;
        fill(diff, diff+n+5, 0);
        for(ll i = 0; i < n; ++i){
            cin >> a[i];
            diff[min(n, a[i]*(i+1))] += -1;
            diff[min(n, a[i]*(i+1)+(i+1))] += 1;
        }
        for(ll i = 0; i < n; ++i){
            diff[i+1] += diff[i];
        }
        for(ll i = 0; i < n; ++i){
            if(diff[i] == 0) ans.push_back(i);
        }
        cout << ans.size() << "\n";
        for(ll num : ans){
            cout << num << " ";
        }
        cout << "\n";
    }
}