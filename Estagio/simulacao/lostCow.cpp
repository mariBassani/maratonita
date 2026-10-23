#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define INF 1e9

void solve(){
    int x, y; cin >> x >> y;
    int s = 0, fat = 1, temp = x, dest;
    while((temp<y && y>x) || (temp>y && y<x)){
        dest = x+fat; 
        s += abs(dest-temp);
        temp = dest;
        fat*=-2;
    }
    s -= abs(temp-y);

    cout << s << endl;
}

int main(){

    freopen("lostcow.in", "r", stdin);
    freopen("lostcow.out", "w", stdout);

    cin.tie(0)->sync_with_stdio(0);
    int t=1;
    //int t; cin >> t;
    while(t--){
        solve();
    }

    return 0;
}