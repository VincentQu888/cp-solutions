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
        int a[n+5];
        set<int> s;
        for(int i = 0; i < n; ++i){
           cin >> a[i];
           if(1 <= a[i] && a[i] <= 10) s.insert(1);
           else if(11 <= a[i] && a[i] <= 20) s.insert(2);
           else if(21 <= a[i] && a[i] <= 30) s.insert(3);
           else if(31 <= a[i] && a[i] <= 40) s.insert(4);
        }
        cout << s.size() << "\n";
        s.clear();
    }
}