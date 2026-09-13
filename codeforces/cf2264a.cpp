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
        int n; cin >> n;
        int a[n+5];
        bool ans = true;
        int r = n-1;
        for(int i = 0; i < n; ++i) cin >> a[i];
        for(int i = 0; i < n; ++i){
            if(a[i] != i+1){
                if(a[a[i]-1] != i+1 || a[i]-1 > r){ans = false; break;}
                r = a[i]-1;
            }
        }
        if(ans) cout << "YES\n";
        else cout << "NO\n";
    }
}