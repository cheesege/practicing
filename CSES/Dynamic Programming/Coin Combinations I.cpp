//by_answer
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,x;
    int MAX = 1e6+5;
    cin >> n >> x;
    vector<int> coin;
    for(int i=0;i<n;i++){
        int a;
        cin >> a;
        coin.push_back(a);
    }
    vector<int> dp(MAX,0);
    dp[0] = 1;
    for(int i=0;i<x;i++){
        for(int j=0;j<n;j++){
            if(i+coin[j] > x){
                continue;
            }
            dp[i + coin[j]] = (dp[i + coin[j]] + dp[i]) % int(1e9+7);
        }
    }
    cout << dp[x];
}