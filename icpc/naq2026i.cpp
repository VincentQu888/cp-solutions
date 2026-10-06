#include <algorithm>
#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
#pragma GCC optimize("Ofast")
#pragma GCC target("avx2")
#define ll long long
#define pii pair<ll, ll>
#define inf 0x7fffffff

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int t; cin >> t;
    for(int cases = 0; cases < t; ++cases){
       int n, m; cin >> n >> m;
       int ans = n-1;
       bool flg = true;
       for(int i = 0; i < m; ++i){
        int a, b; cin >> a >> b;
        if(b == a+1) --ans;
        if(b < a){flg = false;}       }
       if(flg) cout << ans << "\n";
       else cout << -1 << "\n";
    }
}