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
        int n2 = n;
        int size = 0;
        while(n2 > 0){
            n2 /= 10;
            ++size;
        }
        int digits[size+5];
        int idx = size-1;
        while(n > 0){
            digits[idx] = n%10;
            n /= 10;
            --idx;
        }
        bool flg = true;
        bool flg2 = false;
        for(int i = 0; i < size-1; ++i){
            if(digits[i+1] > digits[i]+1){flg = false; break;}
            else if(digits[i+1] <= digits[i]) break;
        }
        if(9-digits[0] >= size-1 && flg){
            for(int i = 1; i < size; ++i) digits[i] = digits[i-1]+1;
        }else if(9-digits[0]-1 >= size-1){
            digits[0] = digits[0]+1;
            for(int i = 1; i < size; ++i) digits[i] = digits[i-1]+1;
        }else if(size < 9){
            ++size;
            digits[0] = 1;
            for(int i = 1; i < size; ++i) digits[i] = digits[i-1]+1;
        }else{
            cout << -1 << "\n";
            flg2 = true;
        }

        if(!flg2){
            int result = 0;
            for (int i = 0; i < size; i++) result = result*10+digits[i];
            cout << result << "\n";
        }

    }
}