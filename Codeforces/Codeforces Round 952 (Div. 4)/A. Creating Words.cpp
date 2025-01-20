#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fastio ios::sync_with_stdio(0);cin.tie(0);

signed main(){
    fastio;
    string a,b;
    int t;
    cin >> t;
    for(int i=0;i<t;i++) {
        cin >> a >> b;
        char aa = a[0], bb = b[0];
        a[0] = bb;
        b[0] = aa;
        cout << a << ' ' << b << '\n';
    }
}