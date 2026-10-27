#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define INF 1e9

void solve(){
    int n, idx=0, maior=0;
    string ans;
    cin >> n;
    vector<int> p2(n);
    stack<pair<int, int> > pilha;
    for(int i=0; i<n; i++){
        cin >> p2[i];
        int x = p2[i];
        if(pilha.empty() || pilha.top().first>x) pilha.push({x, i});
        else {
            while(pilha.top().first<x && pilha.empty()==0) {
                idx = pilha.top().second;
                pilha.pop();
            }
            pilha.push({x,i});
            
        }
    }

    
}

int main(){

    //freopen("template.in", "r", stdin);
    //freopen("template.out", "w", stdout);

    cin.tie(0)->sync_with_stdio(0);
    int t=1;
    //int t; cin >> t;
    while(t--){
        solve();
    }

    return 0;
}