//by_answer
//0-1 knapsack
//working
#include <bits/stdc++.h>
using namespace std;;
#define int long long

signed main(){
    long long n,w;//物品總數 背包容量
    cin >> n >> w;
    long long weight[n];//重量表
    long long value[n];//價值表
    int N = 1e5+5,INF = 1LL<<60;
    vector<vector<int>> dp(n+1, vector<int>(n+1, N));//DP表
    dp[0][0] = 0;
    for(int i=0;i<n;i++){
        cin >> weight[i];
        cin >> value[i];
    }
    for(int i=0;i<n;i++){//DP每種物品
        for(int j=0;j<=n;j++){//DP每種價值
            if(i<j){//不儲存超過物品範圍價值的重量
                dp[i+1][j] = dp[i][j];//
            }
            else{
                dp[i+1][j] = min(dp[i][j],dp[i][j - value[i]] + weight[i]);//
            }
            for(int o=0;o<n;o++){//DP每種空間
                for(int p=0;p<=n;p++){//DP每種重量
                    cout << dp[o][p] << ' ';
                }
                cout << '\n';
            }
            cout << '\n';
        }
    }
    for(int i=0;i<n+1;i++){//DP每種空間
        for(int j=0;j<=n+1;j++){//DP每種重量
            cout << dp[i][j] << ' ';
        }
        cout << '\n';
    }
    int ma = 0;
    for(int i=0;i<n+1;i++){//DP每種空間
        for(int j=0;j<=n+1;j++){//DP每種重量
            if(dp[i][j] > ma && dp[i][j] <= w){
                ma = dp[i][j];
            }
        }
    }
    cout << dp[n][w] << '\n';
}