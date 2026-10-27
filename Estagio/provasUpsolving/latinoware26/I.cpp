#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define INF 1e9

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int n; cin >> n;
    vector<string> words;
    for(int i=0; i <n; i++){
        string s; cin >> s;
        words.pb(s);
    }
    int ans=0;
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            string a=words[i], b = words[j];
            a += words[j];
            b += words[i];
            string ta = a, tb = b;
            reverse(ta.begin(), ta.end());
            reverse(tb.begin(), tb.end());
            if(ta == a) ans++;
            if(tb == b) ans++;
        }
    }

    cout << ans << endl;

    return 0;
}