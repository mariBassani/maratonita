#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define INF 1e9

void solve(){
    int n; cin >> n;
    vector<pair<int, pair<int, string> > > ans;
    for(int i=0; i<n; i++) {
        multiset<int> pts;
        int total=0; 
        string nome;
        cin >> nome >> total;
        total*=10;
        for(int k=0; k<6; k++) {int x; cin >> x; pts.insert(x);}
        for(auto j=next(pts.begin()); j !=prev(pts.end()); ++j) total+= (*j);
        ans.pb(make_pair(total, make_pair(-i, nome)));
    }

    sort(ans.rbegin(), ans.rend());

    for(int i=0; i<n;i++){
        if(i>=1000) break;
        if(i>2 && ans[i].first!=ans[2].first) break;
        cout << ans[i].second.second << " " << ans[i].first << endl;
    }

}

int main(){

    cin.tie(0)->sync_with_stdio(0);
    int t=1;
    //cin >> t;
    while(t--){
        solve();
    }

    return 0;
}