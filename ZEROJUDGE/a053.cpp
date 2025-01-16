#include <bits/stdc++.h>
using namespace std;
#define int long long
#define cheese ios::sync_with_stdio(0);cin.tie(0);

signed main(){
    //cheese
    int n;
    cin >> n;
    if(n<=10){
        cout << n*6;
    }
    else if(n <= 20){
        cout << (n-10)*2+60;
    }
    else if(n <=40){
        cout << (n-20)*1+80;
    }
    else{
        cout << 100;
    }
}