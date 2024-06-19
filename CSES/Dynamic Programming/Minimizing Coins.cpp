//by_temmie
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,x;
    cin >> n >> x;
    int MAX = 1e6+5;
    vector<int> dp(MAX,MAX);
    vector<int> price;
    for(int i=0;i<n;i++){
        int tmp;
        cin >> tmp;
        price.push_back(tmp);
    }
    //當你的錢有x元的時候，所需要的最小錢幣
    dp[0] = 0;
    for(int i=1;i<=x;i++){
        for(int j=0;j<n;j++){
            if(i-price[j] < 0){
                continue;
            }
            dp[i] = min(dp[i - price[j]]+1,dp[i]);
        }
    }
    if(dp[x]==MAX){
        cout << "-1";
    }
    else{
        cout << dp[x];
    }
}