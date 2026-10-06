#include <algorithm>
#include <iostream>
#include <bits/stdc++.h>
#include <ostream>
#include <vector>
using namespace std;
#pragma GCC optimize("Ofast")
#pragma GCC target("avx2")
#define ll long long
#define pii pair<ll, ll>
#define inf 0x7fffffff

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int t; cin >> t;
    for(int cases = 0; cases < t; ++cases){
        char prev = 'F';
        for(int i = 0; i < 200; ++i){
            cout << prev << "\n" << flush;
            char ans; cin >> ans;
            if(ans == 'F' && i%2 == 0){
                prev = 'T';
            }else if(ans == 'T' && i%2 == 0){
                prev = 'F';
            }else{
                int random = rand() % 2;
                if(random == 0) prev = 'F';
                else prev = 'T';
            }
        }
    }
}