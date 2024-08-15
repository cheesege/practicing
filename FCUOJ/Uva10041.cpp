#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        int r;
        cin >> r;
        int ori[r];
        for(int j=0;j<r;j++){
            int a;
            cin >> a;
            ori[j] = a;
        }
        sort(ori,ori+r);
        int ans = 10000000000;
        int rec;
        for(int j=0;j<r;j++){
            rec = 0;
            for(int k=j;k>=0;k--){
                rec+=abs(ori[j]-ori[k]);
            }
            for(int k=j;k<r;k++){
                rec+=abs(ori[j]-ori[k]);
            }
            ans = min(rec,ans);
        }
        cout << ans << '\n';
    }
}