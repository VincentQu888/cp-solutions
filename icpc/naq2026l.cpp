#include <algorithm>
#include <iostream>
#include <bits/stdc++.h>
#include <ostream>
#include <vector>
using namespace std;
#pragma GCC optimize("Ofast")
#pragma GCC target("avx2")
#define ll long long
#define pii pair<ll, ll>
#define inf 0x7fffffff

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);   
    int t; cin >> t;
    for(int cases = 0; cases < t; ++cases){
        ll n, p;
        cin >> n >> p;
        ll duration = 0;
        for (int i = 0; i < n; ++i) {
            ll t_i;
            cin >> t_i;
            duration += t_i;
        }
        double ans = (double)(p * p) / duration;
        cout << fixed << setprecision(9) << ans << "\n";
    }
}