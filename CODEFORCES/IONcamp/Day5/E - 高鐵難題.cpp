//we
//DP
#include <bits/stdc++.h>
#define int long long //TLE or MLE remove
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl '\n'
using namespace std;
int n, a[1000000], b[1000000], c[1000000], dp[1000000][2];

signed main(void){
    fastio
    cin >> n;
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i];
    for(int i = 1; i <= n; i++) cin >> c[i];
    dp[0][0] = 0;
    dp[0][1] = c[1];
    for(int i = 1; i <= n; i++){
        dp[i][0] = min(dp[i-1][0] + a[i-1], dp[i-1][1] + b[i-1] + c[i+1]);
        dp[i][1] = min(dp[i-1][1] + b[i-1], dp[i-1][0] + a[i-1] + c[i+1]);
    }
    cout << min(dp[n][0], dp[n][1]) << endl;
    return 0;
}
