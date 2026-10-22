#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define INF 1e9

void solve(){
    int n, m;
    cin >> n >> m;
    vector<int> road;
    road.pb(0);
    for(int i=0; i < n; i++){
        int x, v; cin >> x >> v;
        while(x--) road.pb(v);
    }

    int dif = 0, atual = 1;
    for(int i = 0; i < m; i++){
        int x, v; cin >> x >> v;
        int lim = atual + x;
        for(int j = atual; j<lim; j++) dif = max(dif, v-road[j]);
        atual = lim;
    }
    cout << dif << endl;
}

int main(){

    freopen("speeding.in", r, stdin);
    freopen("speeding.out", w, stdout);
    
    cin.tie(0)->sync_with_stdio(0);
    int t=1;
    //int t; cin >> t;
    while(t--){
        solve();
    }

    return 0;
}