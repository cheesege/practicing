//by_answer
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define fastio ios::sync_with_stdio(0);cin.tie(0);
int limit = 1e7;
int dp[1000010];

/*
int main() {
    //fastio
    int n;
    cin >> n;
    int dp[1000010];
    for(int i=0;i<=n;i++){
        dp[i] = limit;
    }
    dp[n] = 0;
    for(int j=n;j>0;j--) {
        if(dp[j] == limit){
            dp[j] = -1;
            continue;
        }
        string use = to_string(j);
        for (int i = 0; i <= int(use.length()); i++) {
            if((j-(use[i] - '0')) < 0){
                continue;
            }
            dp[j - (use[i] - '0')] = min(dp[j - (use[i] - '0')], dp[j] + 1);
        }
    }
    for(int i=0;i<=n;i++){
        cout << dp[i] << '\n';
    }
}
*/
int main() {
    int n;
    cin >> n;
    memset(dp, 0x3F, sizeof(dp));
    dp[0] = 0;
    for (int i = 1; i <= n; i++){
        int tmp = i;
        while (tmp){
            dp[i] = min(dp[i], dp[i-(tmp%10)]+1);
            tmp /= 10;
        }
    }
    cout << dp[n] << "\n";
}
