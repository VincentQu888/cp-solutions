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

int gcd(int a, int b) {
    while(b){
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    for(int cases = 0; cases < t; ++cases){
        int n; cin >> n;
        int a[n+5];
        for(int i = 0; i < n; ++i) cin >> a[i];
        cout << gcd(a[0], a[n-1]) << "\n";
    }
}