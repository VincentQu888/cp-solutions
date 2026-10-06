#include <algorithm>
#include <iostream>
#include <bits/stdc++.h>
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
        int n, q, g; cin >> n >> q >> g;
        map<int, int> genres;
        vector<int> indices;
        vector<pair<int, vector<int>>> plays;
        vector<int> queries;
        vector<char> order;
        for(int i = 0; i < q; ++i){
            char cmd; cin >> cmd;
            order.push_back(cmd);
            if(cmd == 'P'){
                int genre, a; cin >> genre >> a;
                genres[genre] = 0;
                plays.push_back({genre, {}});
                for(int j = 0; j < a; ++j){
                    int cur; cin >> cur;
                    indices.push_back(cur);
                    plays[plays.size()-1].second.push_back(cur);
                }
            }else{
                int genre; cin >> genre;
                queries.push_back(genre);
            }
        }
        sort(indices.begin(), indices.end());
        map<int, int> recent;
        for(int i = 0; i < indices.size(); ++i) recent[indices[i]] = 0;
        int pidx = -1, qidx = -1;
        for(int i = 0; i < q; ++i){
            if(order[i] == 'P'){
                ++pidx;
                for(int j = 0; j < plays[pidx].second.size(); ++j){
                    int person = plays[pidx].second[j], genre = plays[pidx].first;
                    if(recent[person] == genre) continue;
                    genres[genre]++;
                    genres[recent[person]]--;
                    recent[person] = genre;
                }
            }else{
                ++qidx;
                cout << genres[queries[qidx]] << "\n";
            }
        }
    }
}