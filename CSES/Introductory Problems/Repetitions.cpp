#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    string n;
    cin >> n;
    char now;
    int most,bignow=1;
    now = n[0];
    for(int i=1;i<n.size();i++){
        if(n[i]==now){
            bignow++;
        }
        else{
            most = max(most,bignow);
            bignow=1;
            now = n[i];
        }
    }
    most = max(most,bignow);
    cout << most;
}