#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define INF 1e9

void solve(){
    int n;
    cin >> n;
    map<int,int> ordem;
    for(int i=1; i<=n; i++) {
        int x; cin >> x;
        ordem[x] = i;
    }
    vector<int> cows(n+1), ans(n+1);
    for(int i=1; i<=n; i++) cin >> cows[i];

    for(int i=1; i<=n; i++) {
        int x = i;
        for(int i=0; i<3; i++) x = ordem[x];
        ans[x] = cows[i];
    }
    
    for(int i=1; i<=n; i++){
        cout << ans[i] << endl;
    }
}

int main(){

    freopen("shuffle.in", "r", stdin);
    freopen("shuffle.out", "w", stdout);

    cin.tie(0)->sync_with_stdio(0);
    int t=1;
    //int t; cin >> t;
    while(t--){
        solve();
    }

    return 0;
}