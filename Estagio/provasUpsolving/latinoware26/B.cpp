    #include <bits/stdc++.h>
    using namespace std;
    #define pb push_back
    #define INF 1e9

    void solve(){
        int a, b; cin >> a >> b;
        if(a%(b+1)) cout << "Trojack" << endl;
        else cout << "Thiago"<< endl;
    }

    int main(){

        cin.tie(0)->sync_with_stdio(0);
        int t=1;
        //int t; cin >> t;
        while(t--){
            solve();
        }

        return 0;
    }