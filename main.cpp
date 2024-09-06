#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define cheese ios::sync_with_stdio(0);cin.tie(0);

signed main(){
    //cheese
    int t;
    cin >> t;
    while(t--) {
        string a,b;
        float aa,bb;
        cin >> a >> b;
        aa = stof(a);
        bb = stof(b);
        cout << (int)(aa+bb);

    }
}