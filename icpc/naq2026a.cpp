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
    ll n; cin >> n;
    ll MOD = 998244353;
    ll INV2 = 499122177;
    ll INV3 = 332748118;
    n %= MOD;
    cout << (((((n + 1) * n) % MOD * INV2) % MOD * n) % MOD - (((((n - 1 + MOD) % MOD * n) % MOD * (n + 1)) % MOD * INV3) % MOD) + MOD) % MOD << "\n";
}
