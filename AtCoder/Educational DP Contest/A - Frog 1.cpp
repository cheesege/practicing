//by_answer
#include <bits/stdc++.h>
using namespace std;;

int dp[1000000];
int main(){
    int n;
    cin >> n;
    int stone[n];
    for(int i=0;i<n;i++){
        int a;
        cin >> a;
        stone[i] = a;
    }
    dp[0] = 0;
    dp[1] = abs(stone[1]-stone[0]);//從第一格跳到第二格所需距離
    for(int i=2;i<n;i++){
        dp[i] = min(dp[i-1] + abs(stone[i] - stone[i-1]),dp[i-2] + abs(stone[i] - stone[i-2]));//因為一次只能跳1or2格 所以第i格的距離為 第i-1格+第i+1格到第i格的距離 以及 第i-2格+第i+2格到第i格的距離 兩者的最小值
    }
    cout << dp[n-1];
}