#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define INF 1e9

void solve(){
    int n, k; cin >> n >> k;
    vector<int> d(n);
    for(int i=0; i< n; i++) cin >> d[i];
    sort(d.begin(), d.end());
    int ans=1, cont;
    for(int i=0; i<n; i++){
        cont = 0;
        for(int j=i; j<n; j++){
            if((d[j]-d[i])>k) break;
            cont++;
        }
        ans = max(ans, cont);
    }

    cout << ans << endl;
}

int main(){

    // freopen("dond.in", "r", stdin);
    // freopen("dond.out", "w", stdout);

    cin.tie(0)->sync_with_stdio(0);
    int t=1;
    //int t; cin >> t;
    while(t--){
        solve();
    }

    return 0;
}