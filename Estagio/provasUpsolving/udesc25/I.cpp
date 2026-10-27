#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define INF 1e9

vector<int> visited(27,0);

void dfs(int a){
    if(visited[a-'a']) continue;
    visited[a-'a'] = 1
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    vector<int> used(26);
    int n;
    vector<vector<int> > tree(27);
    for(int i=0;i<n;i++){
        string x; cin >> x;
        for(int j=0; j<x.size()-1; j++){
            int a = x[i], b = x[i+1];
            tree[a] = b;
        }
    }

    dfs('a');

    return 0;
}