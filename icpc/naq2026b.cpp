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
    int n; cin >> n;
    int a[n+5], ans = 0;
    for(int i = 0; i < n; ++i) cin >> a[i];
    for(int i = 0; i < n-2; ++i){
        if(a[i+1] - a[i] > a[i+2] - a[i+1]) ++ans;
    }
    cout << ans << "\n";
}
