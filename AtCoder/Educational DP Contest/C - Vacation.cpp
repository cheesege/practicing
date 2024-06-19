#include <bits/stdc++.h>
using namespace std;;

int main(){
    int n;
    cin >> n;
    int work[n][3];
    int dp[n][3];//分別從三個頭開始求最大
    memset(dp,0,sizeof(dp));
    for(int i=0;i<n;i++){
        cin >> work[i][0];
        cin >> work[i][1];
        cin >> work[i][2];
    }
    dp[0][0] = work[0][0];
    dp[0][1] = work[0][1];
    dp[0][2] = work[0][2];
    for(int i=1;i<n;i++){
        dp[i][0] = max(dp[i-1][1] + work[i][0] , dp[i-1][2] + work[i][0]);
        dp[i][1] = max(dp[i-1][0] + work[i][1] , dp[i-1][2] + work[i][1]);
        dp[i][2] = max(dp[i-1][0] + work[i][2] , dp[i-1][1] + work[i][2]);
    }
    cout << max(dp[n-1][0],max(dp[n-1][2],dp[n-1][1]));
}