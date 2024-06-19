//by_answer
#include <bits/stdc++.h>
using namespace std;;

int main(){
    int n,k,maxi = 1e9+7;//求最小值時 預設陣列空間 以及初始值 且將初始值設為最大
    cin >> n >> k;
    int stone[n];
    vector<int> dp(n,maxi);//vector<type> name(amount,value);
    for(int i=0;i<n;i++){
        int a;
        cin >> a;
        stone[i] = a;
    }
    dp[0] = 0;
    for(int i=1;i<n;i++){
        for(int j=1;j<=k;j++){//最低動一格 最多動k格
            if(j>i){//移動步數不得超越界線
                break;
            }
            dp[i] = min(dp[i],dp[i-j] + abs(stone[i] - stone[i-j]));//當執行第一步時 則為在1e9+7跟0+位置差之間求最小值 之後便正常取兩者最小
        }
    }
    cout << dp[n-1];
}