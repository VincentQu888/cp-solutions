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
        int hi = 0, v = 2; 
        vector<int> ans[n];
        for(int i = 2; i <= n; ++i){
            int resp = 1;
            while(resp != 0){
                cout << "? " << 1 << " " << i << " " << hi+1 << "\n"; 
                cout.flush();
                cin >> resp;
                if(resp == 1){
                    ++hi;
                    v = i;
                }
            }
        }
        for(int i = 1; i <= n; ++i){
            int resp = 1;
            while(resp != 0){
                cout << "? " << v << " " << i << " " << hi+1 << "\n"; 
                cout.flush();
                cin >> resp;
                if(resp == 1) ++hi;
            }
            ans[hi].push_back(i);
        }
        cout << "! " << ans[hi][0] << " " << v << " " << hi << "\n";
        cout.flush();
    }
}