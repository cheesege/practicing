#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int dp[30500] = {0};
    int coin[] = {1,5,10,25,50};
    dp[0] = 1;
    for(int i = 0; i < 4; ++i)
    {
        for(int j = coin[i]; j <= 30000; j++)
            dp[j] = dp[j] + dp[j - coin[i]];
    }
    int n;
    while(cin >> n){
        int ans = dp[n];
        if(ans==1){
            cout << "There is only 1 way to produce "<<n<<" cents change." << '\n';
        }
        else{
            cout << "There are " << ans << " ways to produce "<<n<<" cents change." << '\n';
        }
    }
}