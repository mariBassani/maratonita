#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define INF 1e9

void solve(){
    int n; cin >> n;
    vector<int> psum(n+1), flores(n+1);
    psum[0] = 0;
    for(int i=0; i<n; i++) {
        int x; cin >> x;
        flores[i+1] = x;
        psum[i+1] = x + psum[i];
    }

    int ans = n;
    for(int i=1; i<n; i++){
        for(int j=i+1; j<=n; j++){
            double med = (psum[j]-psum[i-1])*1.0/(j-i+1);
            for(int k=i; k<=j; k++) if(flores[k] == med){ans++; break;}
        }
    }
    
    cout << ans << endl;

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