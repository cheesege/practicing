#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fastio ios::sync_with_stdio(0);cin.tie(0);

signed main(){
    fastio;
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        int x;
        cin >> x;
        pair<int,int> large = {0,0};
        for(int j=2;j<=100 && j<=x ;j++){
            int now = j,ans=0;
            while(now <= x){
                ans = ans + now;
                now += j;
            }
            large.first = (ans > large.second ? j : large.first);
            large.second = (ans > large.second ? ans : large.second);
        }

        cout << large.first << '\n';
    }
}