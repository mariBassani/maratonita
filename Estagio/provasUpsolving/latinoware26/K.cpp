#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define INF 1e9

void solve(){
    int m, n, dif = 0; cin >> m >> n;
    vector<int> kau(m), juli(n);
    for(int i=0; i<m; i++) cin >> kau[i];
    for(int i=0; i<n; i++) cin >> juli[i];
    int s1 = accumulate(kau.begin(), kau.end(), 0);
    int s2 = accumulate(juli.begin(), juli.end(), 0);

    if(s1==s2) cout << "empate\n";
    else if(s1>s2) cout << "JuliAna\n";
    else cout << "KauAna\n";
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