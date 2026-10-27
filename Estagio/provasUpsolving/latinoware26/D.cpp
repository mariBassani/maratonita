#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define int long long
#define INF 1e9

void solve(){
    int n, k; cin >> n >> k;
    int ans=0, ver = 0;
    for(int i=0; i<n; i++){
        int a, b; cin >> a >> b;
        if(b<k) continue;
        k++; ver++;
        ans+=a;
    }

    if (ver > (n/2)) cout << -1 << endl;
    else cout << ans << endl;
    
}

signed main(){

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