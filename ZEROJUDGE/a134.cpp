#include <bits/stdc++.h>
using namespace std;
#define int long long
#define cheese ios::sync_with_stdio(0);cin.tie(0);

signed main(){
    cheese
    int fab[40];
    fab[0] = 1;
    fab[1] = 1;
    for(int i=2;i<39;i++){
        fab[i] = fab[i-1] + fab[i-2];
    }
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int a;
        cin >> a;
        string ans;
        int final = 38;
        int reca = a;
        int space = 0;
        int cont = 0;
        while(a>0 || final>0){
            if(space==1){
                space--;
            }
            if((a>=fab[final])&&space==0){
                a-=fab[final];
                ans+='1';
                space++;
                cont=1;
            }
            else if(cont) {
                ans += '0';
            }
            final--;
        }
        cout << reca << " = " << ans << " (fib)" <<'\n';
    }
}