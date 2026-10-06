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
    ll MOD = 998244353;
    for(int cases = 0; cases < t; ++cases){
        int n; cin >> n;
        pii blocks[n];
        for(int i = 0; i < n; ++i){
            ll a, b;
            cin >> a >> b;
            blocks[i] = {max(a, b), min(a, b)};
        }
        sort(blocks, blocks+n, greater<pii>());
        ll ans = blocks[0].first == blocks[0].second ? 1 : 2;
        bool flg = true;
        for(int i = 1; i < n; ++i){
            ll a = blocks[i-1].first, b = blocks[i-1].second, c = blocks[i].first, d = blocks[i].second;
            if(b < d){flg = false; break;}
            ll same = ((a-c+1)%MOD)*((b-d+1)%MOD)%MOD;
            ll rotated = 0;
            if(c != d && b >= c) rotated = ((a-d+1)%MOD)*((b-c+1)%MOD)%MOD;
            ll ways = (same+rotated)%MOD;
            ans = ans*ways%MOD;
        }
        for(int i = 0; i < n;){
            int j = i;
            while (j < n && blocks[j] == blocks[i]) ++j;
            ll fact = 1;
            for(int k = 2; k <= j-i; ++k) fact = fact*k%MOD;
            ans = ans*fact%MOD;
            i = j;
        }
        if(!flg) cout << 0 << '\n';
        else cout << ans << '\n';
    }
}
