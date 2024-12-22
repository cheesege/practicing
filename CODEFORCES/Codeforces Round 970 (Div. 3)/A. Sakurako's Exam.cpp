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
        if(a%2==0&&b%2==0){
            cout << "YES" << '\n';
            continue;
        }
        if(a%2==0&&(b+(a/2))%2==0){
            cout << "YES" << '\n';
            continue;
        }
        if(a%2==0&&a!=0){
            cout << "YES" << '\n';
            continue;
        }
        cout << "NO" << '\n';
    }
}