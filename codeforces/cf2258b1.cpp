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
        int n, m;
        cin >> n >> m;
        int freq[m+5]; fill(freq, freq+m+5, 0);
        int pre[m+5]; fill(pre, pre+m+5, 0);
        for(int i = 0; i < n; ++i){
            int a; cin >> a;
            ++freq[a];
        }
        for(int i = m; i >= 1; --i) pre[i] = pre[i+1] + freq[i];
        int ans = 0;
        for(int i = 1; i <= m; ++i) ans = max(ans, freq[i]);
        for(int i = 1; i <= m/2; ++i){
            ans = max(ans, pre[i] - freq[i*2] + freq[i*2]*2);
        }
        cout << ans << "\n";
    }
}