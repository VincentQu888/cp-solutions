#include <iostream>
#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#pragma GCC target("avx2")
using namespace std;
#define ll long long
#define pii pair<int, int>
#define pll pair<ll, ll>
#define INF 0x7fffffff
#define LINF LONG_LONG_MAX

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    for(int c = 0; c < t; ++c){
        int n; cin >> n; 
        int r[5005][4];
        bool flag = true;
        for(int i = 0; i < n; ++i){
            cin >> r[i][0] >> r[i][1] >> r[i][2] >> r[i][3];
        } 
        for(int i = n; i > 0; --i){
            int lr = 1;
            for(int j = 0; j < n; ++j){
                if(!(r[j][0] <= lr && lr <= r[j][1]) && !(r[j][2] <= i-lr+1 && i-lr+1 <= r[j][3])) ++lr;
                if(lr == i+1) break;
            }
            if(lr == i+1){
                cout << i << "\n";
                flag = false;
                break;
            }
        }
        if(flag) cout << 0 << "\n";
    }
}