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
        int n, m; cin >> n >> m; 
        int v[n+5], a[n+5][m+5]; 
        for(int i = n-1; i >= 0; --i) cin >> v[i];
        for(int i = n-1; i >= 0; --i){
            for(int j = 0; j < m; ++j) cin >> a[i][j];
        }
        int lo = 1, hi = m, mid = (lo+hi)/2, ans = m;
        while(lo <= hi){
            priority_queue<int, vector<int>, greater<int>> pq; bool flg = false;
            int sums[n+5], lof = INF;
            fill(sums, sums+n+5, 0);
            for(int i = 0; i < n; ++i){
                if(i > 0) sums[i] = sums[i-1];
                for(int j = 0; j < m; ++j){
                    pq.push(a[i][j]);
                    sums[i] += a[i][j];
                    if(pq.size() > mid) {
                        sums[i] -= pq.top();
                        pq.pop();
                    }
                }
            }
            for(int i = n-1; i >= 0; --i){
                lof = min(lof, v[i]);
                if(sums[i] >= lof) flg = true;
            }
            if(flg){
                ans = mid;
                hi = mid-1;
                mid = (lo+hi)/2;
            }else{
                lo = mid+1;
                mid = (lo+hi)/2;
            }
        }
        cout << ans << "\n";
    }
}