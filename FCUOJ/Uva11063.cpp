#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int a,cas = 0,pass;
    while(cin >> a){
        pass = 1;
        cas++;
        set<int> b2;
        int rec[a];
        int b,las = -10;
        for(int i=0;i<a;i++){
            cin >> b;
            rec[i] = b;
            if(b<1 || las>=b){
                pass=0;
            }
            las = b;
        }
        if(pass == 1) {
            for (int i = 0; i < a; i++) {
                for (int j = i; j < a; j++) {
                    if (b2.count(rec[i] + rec[j])) {
                        pass = 0;
                        break;
                    }
                    b2.insert(rec[i] + rec[j]);
                }
                if (!pass) {
                    break;
                }
            }
        }
        if(pass){
            cout << "Case #" << cas << ": It is a B2-Sequence." << '\n' << '\n';
        }
        else{
            cout << "Case #" << cas << ": It is not a B2-Sequence."<<'\n'<<'\n';
        }
    }
}