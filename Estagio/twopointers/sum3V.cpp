#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define INF 1e9

void solve(){
    int n, k; cin >> n >> k;
    vector<int> d(n);
    for(int i=0; i<n; i++) cin >> d[i];
    sort(d.begin(), d.end());
    
    for(int i=0; i<n; i++){
        int s = k-(nums[i]);
        int p1=i+1, p2=n-1;
        while(p1!=p2){
            if((p1+p2)>s) p2--;
            else if((p1+p2)<s) p1++;
            else {
                cout << i << " " << p1 << " " << p2 << endl; 
                break;
            }
        }
    }
}

int main(){

    // freopen("diamond.in", "r", stdin);
    // freopen("diamond.out", "w", stdout);

    cin.tie(0)->sync_with_stdio(0);
    int t=1;
    //int t; cin >> t;
    while(t--){
        solve();
    }

    return 0;
}