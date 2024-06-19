#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    string a;
    int ask[10] = {6,2,5,5,4,5,6,4,7,6};
    cin >> a;
    int ans = 0;
    for(int i=0;i<a.length();i++){
        ans += ask[a[i]-'0'];
    }
    cout << ans;

}