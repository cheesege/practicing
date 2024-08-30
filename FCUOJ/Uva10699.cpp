#include <bits/stdc++.h>
using namespace std;
#define int long long
#define cheese ios::sync_with_stdio(0);cin.tie(0);

signed main(){
    //cheese
    int fac[1000005] = {0};
    for(int i=2;i<500001;i++){
        if(fac[i]==0){
            int cop = i;
            cop*=2;
            while (cop<=1000000){
                fac[cop] = 1;
                cop+=i;
            }
        }
    }
    int a;
    while (cin >> a){
        if(a==0){
            return 0;
        }
        int ans = 0;
        for(int i=a;i>1;i--){
            if(a%i==0 && fac[i]==0){
                ans++;
            }
        }
        cout << a << " : " << ans << '\n';
    }
}