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
        ll a[400005], l[200005], dp[400005];
        fill(l, l+n+5, 0);
        for(int i = 1; i <= 2*n; ++i){
            cin >> a[i]; 
            if(!l[a[i]]) l[a[i]] = i;
        }
        dp[1] = 0;
        for(int i = 1; i <= 2*n; ++i){
            if(l[a[i]] == i) dp[i+1] = dp[i]+1;
            else dp[i+1] = max(dp[i]+1, (i-l[a[i]]+1)*(i-l[a[i]]+1) + dp[l[a[i]]]);
        }
        cout << dp[2*n+1] << "\n";
    }
}