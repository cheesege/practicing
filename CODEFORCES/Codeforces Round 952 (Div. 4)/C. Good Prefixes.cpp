#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fastio ios::sync_with_stdio(0);cin.tie(0);

signed main(){
    fastio;
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        int x,ans = 0;
        cin >> x;
        int prefix[x][2], large = 0;
        for(int j=0;j<x;j++){
            int a;
            cin >> a;
            prefix[j][0] = (j==0 ? a : prefix[j-1][0] + a);
            large = max(a,large);
            prefix[j][1] = large;
            if(prefix[j][0]-prefix[j][1] == prefix[j][1]){
                ans++;
            }
        }
        cout << ans << '\n';
    }
}