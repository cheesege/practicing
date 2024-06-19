#include <bits/stdc++.h>
using namespace std;
#define cheese ios::sync_with_stdio(0);cin.tie(0);

int dp[101][100001];
int k[101];

signed main(){
    cheese
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int a;
        cin >> a;
        k[i] = a;
    }
    memset(dp,0,sizeof dp);
    for(int i=0;i<n;i++){
        for(int j=0;j<100001;j++){
            if(j-k[i]<0){
                dp[i+1][j] = dp[i][j];
                continue;
            }
            dp[i+1][j] = max(dp[i][j],dp[i][j-k[i]]+k[i]);

        }
    }
    int ans=0;
    vector<int> anslist;
    for(int i=1;i<100001;i++){
        if(dp[n][i]==i){
            ans++;
            anslist.push_back(i);
        }
    }
    cout << ans << '\n';
    for(int i=0;i<anslist.size();i++){
        cout << anslist[i] << ' ';
    }
}

