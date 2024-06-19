//by_answer
#include <bits/stdc++.h>
using namespace std;;

int dp[10000000];
int main(){
    int n,mod = 1e9+7;
    cin >> n;
    dp[0] = 1;//空間用完後加一方法數
    for(int i=1;i<=n;i++){
        for(int j=1;j<=6;j++){
            if(j>i){//如果骰到二 最多只能扣除二
                break;
            }
            dp[i] = (dp[i]+dp[i-j])% mod;//自己的方法數等於自己子枝尾端數目

        }
    }
    cout << dp[n];
}