//by_answer
//DP
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n,x;
    cin >> n >> x;
    int coin[n];
    vector<int> dp(1e6+10,0);
    for(int i=0;i<n;i++){
        int a;
        cin >> a;
        coin[i] = a;
    }
    dp[0] = 1;
    for(int i=0;i<n;i++){
        for(int j=0;j<x+10;j++){
            if(j-coin[i]<0){continue;}
            dp[j] = dp[j]+dp[j-coin[i]];
            dp[j] %= int(1e9+7);
        }
    }
    cout << dp[x];
}