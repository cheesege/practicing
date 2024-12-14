#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastio ios::sync_with_stdio(0);cin.tie(0);

int main(){
    fastio
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        string a;
        cin >> a;
        if(a=="bca" || a=="cab"){
            cout << "NO" << '\n';
        }
        else{
            cout << "yes" << '\n';
        }
    }
}