#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define fastio ios::sync_with_stdio(0);cin.tie(0);
int dp[1000][1000];
int mod = 1e9+7;

signed main() {
    //fastio
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        string a;
        cin >> a;
        for(int j=0;j<n;j++){
            if(a[j]=='.'){
                dp[i][j] = 0;
            }
            if(a[j]=='*'){
                dp[i][j] = -1;
            }
        }
    }
    if(dp[0][0]==0){
        dp[0][0] = 1;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(dp[i][j]==-1){
                continue;
            }
            if((i-1) >=0 && dp[i-1][j]!=-1){
                dp[i][j] += dp[i-1][j]% mod;
            }
            if((j-1) >=0 && dp[i][j-1]!=-1){
                dp[i][j] += dp[i][j-1]% mod;
            }
        }
    }
    if(dp[n-1][n-1] == -1){
        cout << 0;
        return 0;
    }
    cout << dp[n-1][n-1] %mod;
}
