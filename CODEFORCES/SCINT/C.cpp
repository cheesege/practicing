//by_answer
#include <bits/stdc++.h>
using namespace std;

int n, m, k, ans=0;
int proto[2005][2005], area[2005][2005], dp[2005][2005];

int main(){
    cin >> n >> m >> k;
    for (int i=1 ; i<=n ; i++){
        for (int j=1 ; j<=m ; j++){
            cin >> proto[i][j];
            area[i][j]=(proto[i][j]>=k);
        }
    }

    for (int i=1 ; i<=n ; i++){
        for (int j=1 ; j<=m ; j++){
            if (area[i][j]==1){
                dp[i][j]=min({dp[i-1][j], dp[i][j-1], dp[i-1][j-1]})+1;
                ans=max(ans, dp[i][j]);
            }else{
                dp[i][j]=0;
            }
        }
    }

    cout << ans*ans << endl;
}