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
        int n; cin >> n;
        int a[200005], b[200005];
        int tcnta = 0, cnta = 0, cntb = 0;
        bool ansz = true;
        for(int i = 0; i < n; ++i) cin >> a[i]; 
        for(int i = 0; i < n; ++i) cin >> b[i]; 
        for(int i = 0; i < n; ++i){
            if(a[i] == 1 && b[i] != 1) ++cnta;
            if(a[i] == 1) ++tcnta;
            if(b[i] == 1) ++cntb;
            if(a[i] != b[i]) ansz = false; 
        }
        if(ansz) cout << 0 << "\n";
        else if(cntb == n || tcnta == 0) cout << -1 << "\n";
        else if(cnta%2 == 1){cout << 1 << "\n";}
        else cout << "2" << "\n"; 
    }
}