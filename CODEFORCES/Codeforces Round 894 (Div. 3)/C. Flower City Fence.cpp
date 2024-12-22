#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
//#define int ll

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int x;
    cin >> x;
    for(int p=0;p<x;p++){
        int n;
        cin >> n;

        int b;
        cin >> b;
        int use;
        if(b > 100000){
            use = b+2;
        }
        else if(b<=100000){
            use = 2*b;
        }
        int rec[use];
        memset(rec,0,sizeof rec);
        int recc[use];
        rec[0] = b;
        recc[0] = b;
        int bar[use][use];
        for(int i=1;i<n;i++){
            int a;
            cin >> a;
            rec[i] = a;
            recc[i] = a;
        }
        reverse(recc,recc+n);//0 1 2 4
        memset(bar,0,sizeof bar);
        for(int i=0;i<n;i++){
            for(int j=0;j<rec[i];j++){
                bar[i][j] = 1;
            }
        }
        for(int i=0;i<use;i++){
            int now=0;
            for(int j=0;j<use;j++){
                if(bar[j][i]==1){
                    now++;
                }
            }
            recc[i] = now;
        }
        int could=1;
        for(int i=0;i<use;i++){
            if(rec[i] == recc[i]){
                continue;
            }
            else{
                could=0;
                cout << "NO" << '\n';
                break;
            }
        }
        if(could){
            cout << "YES" << '\n';
        }
    }

}