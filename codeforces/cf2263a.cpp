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
        int cnt0 = 0, cnt1 = 0;
        for(int i = 0; i < n; ++i){
            cin >> a[i];
            if(a[i] == 0) ++cnt0;
            else ++cnt1;
        }
        if(cnt1 >= cnt0) cout << "Bessie\n";
        else cout << "Elsie\n";
    }
}