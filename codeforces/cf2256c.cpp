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
    for(int c = 0; c < t; ++c){
        int n, k;
        cin >> n >> k;
        string s; 
        cin >> s;
        int r = 0, b = 0;
        for(int i = 1; i < 2*n-1; ++i){
            if(s[i-1] == '1'  && s[i] == '0' || (s[i] == '1' && s[i+1] == '1')){
                if(i%2 == 0) ++b;
                else ++r;
            }
        }
        if(s[2*n-1] == '1' && s[0] == '0' || (s[0] == '1' && s[1] == '1')) ++b;
        if((s[2*n-2] == '1' && s[2*n-1] == '0') || (s[2*n-1] == '1' && s[0] == '1')) ++r;
        cout << r << " " << b << "\n";
    }
}