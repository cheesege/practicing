#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int use = 1e9+7;
    int n,m;
    cin >> n >> m;
    long long dp[n+1][m+1];
    memset(dp,0,sizeof dp);
    for(int i=1;i<=n;i++){
        string a;
        cin >> a;
        for(int j=1;j<=m;j++){
            if(a[j-1]=='.'){
                dp[i][j] = 1;
            }
            else if(a[j-1]=='#'){
                dp[i][j] = 0;
            }
            //cout << dp[i][j] << ' ';
        }
        //cout << '\n';
    }
    dp[0][1] = 1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(dp[i][j]!=0){
                dp[i][j] = dp[i-1][j] + dp[i][j-1];
                dp[i][j]%=use;
            }
        }
    }
    cout << dp[n][m];
}