#include <bits/stdc++.h>
using namespace std;
#define int long long
#define cheese ios::sync_with_stdio(0);cin.tie(0);

signed main(){
    //cheese
    int n,e;
    while(cin >> n){
        if(n==-1){return 0;}
        cin >> e;
        int all = n*e;
        int use,time=0;
        while(all>0) {
            use = all / e;
            if(all%e!=0){
                use++;
            }
            all -= use;
            time++;
        }
        cout << time << '\n';
    }
}