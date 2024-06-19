//by_answer
#include <bits/stdc++.h>
using namespace std;;

int main(){
    string s ,t;
    cin >> s >> t;//cin 兩個字串
    int sl = s.length(),tl = t.length();//字串長度
    int dp[sl+1][tl+1];
    memset(dp,0,sizeof dp);
    for(int i=1;i<=sl;i++){//對第一個字串迴圈
        for(int j=1;j<=tl;j++){//第二個字串
            if (s[i-1] == t[j-1]) {
                dp[i][j] = max(dp[i][j], dp[i-1][j-1] + 1);
            }
            else {
                dp[i][j] = max(dp[i][j-1], dp[i-1][j]);
            }
            for(int o=0;o<=sl;o++){
                for(int p=0;p<=tl;p++){
                    //cout << dp[o][p] << ' ';
                }
                //cout << '\n';
            }
            //cout << '\n';
        }
    }
    string ans;
    int i = sl, j = tl;
    while (i && j) {
        if (s[i-1] == t[j-1]) {
            ans += s[i-1];
            i--, j--;
        }
        else if (dp[i][j-1] >= dp[i-1][j]) {
            j--;
        }
        else i--;
    }
    reverse(ans.begin(), ans.end());
    cout<<ans;
}