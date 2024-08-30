#include <bits/stdc++.h>
using namespace std;
#define int long long
#define cheese ios::sync_with_stdio(0);cin.tie(0);

signed main(){
    //cheese
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int m;
        cin >> m;
        int a[m],b[m];
        for(int j=0;j<m;j++){
            int c,d;
            cin >> c >> d;
            a[j] = c;
            b[j] = d;
        }
        int ans[m+1];
        memset(ans,0,sizeof ans);
        for(int j=m;j>0;j--){
            ans[j]+=a[j-1]+b[j-1];
            if(ans[j]>=10){
                ans[j-1]++;
                ans[j]-=10;
            }
        }
        if(ans[1]>10){
            ans[0]+=1;
            ans[1]-=10;
        }
        int state=0;
        for(int j=0;j<=m;j++){
            if(ans[j]!=0&&state==0){
                state=1;
            }
            if(state==1){
                cout << ans[j];
            }
        }
        cout << '\n'<<'\n';
    }
}