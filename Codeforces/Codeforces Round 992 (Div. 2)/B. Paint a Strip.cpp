#include <bits/stdc++.h>
using namespace std;
#define cheese ios::sync_with_stdio(0);cin.tie(0);
#define int long long


signed main() {
    //cheese
    int t;
    cin >> t;
    while (t--){
        int a;
        //a = t;
        cin >> a;
        if(a==1){
            cout << 1 << '\n';
            continue;
        }
        if(a==2){
            cout << 2 << '\n';
            continue;
        }
        int ans=1;
        a-=1;
        while (a>0){
            a-=2;
            a/=2;
            ans++;
        }
        cout << ans << '\n';
    }
}



