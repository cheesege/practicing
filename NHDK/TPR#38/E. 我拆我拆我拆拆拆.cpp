#include <bits/stdc++.h>
using namespace std;
#define cheese ios::sync_with_stdio(0);cin.tie(0);
#define int long long
signed main(){
    cheese
    int n;
    cin >> n;
    for(int i=sqrt(n);i<n;i++){
        if(n%i==0){
            cout << n/i << ' ' << i ;
            return 0;
        }
    }
}


