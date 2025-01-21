#include <bits/stdc++.h>
using namespace std;
//#define int long long
#define cheese ios::sync_with_stdio(0);cin.tie(0);


signed main(){
    cheese
    int t;
    cin >> t;
    while (t--) {
        int n,m;
        cin >> n >> m;
        int card[n+1];
        memset(card,0,sizeof card);
        for (int i=0;i<n;i++) {
            int a;
            cin >> a;
            card[a]++;
        }
        int ans=0;
        for (int i=1;i<=m/2;i++) {
            if (m%2==0 && i==m/2) {
                ans+=card[i]/2;
                continue;
            }
            if ((m-i)<=n) {
                ans+=min(card[i],card[m-i]);
            }
        }
        cout << ans << '\n';
    }
}
