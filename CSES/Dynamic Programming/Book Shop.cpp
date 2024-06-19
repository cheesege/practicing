//by_answer
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define fastio ios::sync_with_stdio(0);cin.tie(0);
int dp[1005][100005];
int mod = 1e9+7;

signed main() {
    //fastio
    int n,x;
    cin >> n>>x;
    int page[n];
    int price[n];
    memset(dp,0,sizeof dp);
    for(int i=0;i<n;i++){
        int a;
        cin >> a;
        price[i] = a;
    }
    for(int i=0;i<n;i++){
        int a;
        cin >> a;
        page[i] = a;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<=x;j++){//背包 *剩* 多少空間
            if(j-price[i] <0){
                dp[i+1][j] = dp[i][j];//這個空間放不下i物品 那下一個(i+1)格子所考慮的(第i個)物品的狀態相同
            }
            else{
                dp[i+1][j] = max(dp[i][j], dp[i][j - price[i]] + page[i]);//下一個物品的解 可以從自己的價值(不放) 以及扣掉此物品價值的最佳解(放) 中選擇
            }
        }
    }
    cout << dp[n][x];

}
