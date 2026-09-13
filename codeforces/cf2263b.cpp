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
        int n, k; 
        cin >> n >> k;
        if(k < n || k > 2*n-1){cout << -1 << "\n"; continue;}
        int c = n, r = k-n;
        int ans[n][n];
        for(int i = 0; i < n; ++i) fill(ans[i], ans[i]+n, -1);
        int cnt = 1, tempj = 1;
        for(int i = 0; i <= r; ++i){
            ans[0][i] = cnt;
            ++cnt;
        }
        for(int i = r+1; i < n; ++i){
            ans[tempj][i] = cnt;
            ++cnt; ++tempj;
        }
        for(int i = 0; i < n; ++i){
            for(int j = 0; j < n; ++j){
                if(ans[i][j] != -1){
                    cout << ans[i][j] << " ";
                    continue;
                }
                ans[i][j] = cnt;
                ++cnt;
                cout << ans[i][j] << " ";
            }
            cout << "\n";
        }
    }
}