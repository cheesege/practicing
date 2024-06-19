//by_answer
//0-1 knapsack
#include <bits/stdc++.h>
using namespace std;;

int main(){
    long long n,w;//物品總數 背包容量
    cin >> n >> w;
    long long weight[n];//重量表
    long long value[n];//價值表
    long long dp[n+1][w+1];//DP表
    memset(dp, 0, sizeof(dp));
    dp[0][0] = 0;
    for(int i=0;i<n;i++){
        cin >> weight[i];
        cin >> value[i];
    }
    for(int i=0;i<n;i++){//DP每種物品
        for(int j=0;j<=w;j++){//DP每種重量
            if(j - weight[i] < 0){//這種空間夠不夠放進去
                dp[i+1][j] = dp[i][j];//不夠放就不更改
            }
            else{
                dp[i+1][j] = max(dp[i][j],dp[i][j - weight[i]] + value[i]);//選擇放或不放的最大值 放的話就是原本的儲存格減掉該物品重量的位置 轉移成原本的值+新的值
            }
            for(int o=0;o<n+1;o++){//DP每種空間
                for(int p=0;p<=w+1;p++){//DP每種重量
                    cout << dp[o][p] << ' ';
                }
                cout << '\n';
            }
            cout << '\n';
        }
    }
    for(int i=0;i<n+1;i++){//DP每種空間
        for(int j=0;j<=w+1;j++){//DP每種重量
            cout << dp[i][j] << ' ';
        }
        cout << '\n';
    }
    cout << dp[n][w] << '\n';
}