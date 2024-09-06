#include <bits/stdc++.h>
using namespace std;
#define int long long
#define cheese ios::sync_with_stdio(0);cin.tie(0);

signed main(){
    cheese
    int t;
    cin >> t;
    while (t--){
        int a,b;
        cin >> a >> b;
        int ans=0,last=0;
        for(int i=a;i<=b;i+=last){
            ans++;
            last++;
        }
        cout << ans << '\n';
    }
}