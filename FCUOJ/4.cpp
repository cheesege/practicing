#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(0);cin.tie(0);

signed main(){
    fastio;
    int t;
    cin >> t;
    int dp[46];
    dp[0] = 0;
    dp[1] = 1;
    for(int i=2;i<=45;i++){
        dp[i] = dp[i-1] + dp[i-2];
    }
    for(int i=0;i<t;i++){
        int a;
        cin >> a;
        cout << dp[a] << '\n';
    }
}