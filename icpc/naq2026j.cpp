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
        vector<char> s;
        s.push_back('s');
        for(int i = 0; i <= n; ++i) s.push_back('h');
        string str(s.begin(), s.end());
        cout << str << "\n";
    }
}