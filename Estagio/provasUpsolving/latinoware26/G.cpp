#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define INF 1e9

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int t=1, md=0, mz=0, cz=0, cm=0;
    cin >> t;
    while(t--){
        int f1, f2;
        char a1, a2;
        cin >> f1 >> a1 >> f2 >> a2;
        switch(a1){
            case 'B': f1+=3; break;
            case 'D': f1*=2; break;
            case 'R': f1 = (10-f1); break;
        }
        switch(a2){
            case 'B': f2+=3; break;
            case 'D': f2*=2; break;
            case 'R': f2 = (10-f2); break;
        }

        if(f1>f2) {
            md+=2;
            cm++;
            cz=0;
            if(!(cm%3))md+=3;
        }
        else if(f2>f1) {
            mz+=2;
            cz++;
            cm=0;
            if(!(cz%3))mz+=3;
        }
        else {md++;mz++;cm=cz=0;}
    }

    cout << md << " " << mz << endl;
    if(md<mz) cout << "Mandelli" << endl;
    else if(md>mz) cout << "Minez" << endl;
    if(md==mz) cout << "Empate" << endl;

    return 0;
}