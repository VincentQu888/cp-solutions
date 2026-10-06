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
    for(int cases = 0; cases < t; ++cases){
        int n; cin >> n;
        for(int i = 0; i < n; ++i){
            for(int j = 0; j < n; ++ j){
                if((i == 0 && j == 1) || (i ==  1 && j == 0)) cout << 'C';
                else cout << '.';
            }
            cout << "\n";
        }
    }
}