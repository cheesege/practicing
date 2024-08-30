#include <bits/stdc++.h>
using namespace std;
#define int long long
#define cheese ios::sync_with_stdio(0);cin.tie(0);

signed main(){
    //cheese
    int n;
    cin >> n;
    for(int i=1;i<=n;i++){
        string a,b;
        cin >> a >> b;
        int s,l;
        if(a[0]==0||b[0]==0){
            cout << "Pair #" << i << ": Love is not all you need!" << '\n';
            continue;
        }
        s = stoi(a, nullptr,2);
        l = stoi(b, nullptr,2);
        if(__gcd(s,l)==1){
            cout << "Pair #" << i << ": Love is not all you need!" << '\n';
        }
        else{
            cout << "Pair #" << i << ": All you need is love!" << '\n';
        }
    }
}