#include <bits/stdc++.h>
using namespace std;
#define int long long
#define cheese ios::sync_with_stdio(0);cin.tie(0);

signed main(){
    //cheese
    int a;
    cin >> a;
    int x=0;
    x += (a/100000000)*8;
    a%=100000000;
    x += (a/10000000)*7;
    a%=10000000;
    x += (a/1000000)*6;
    a%=1000000;
    x += (a/100000)*5;
    a%=100000;
    x += (a/10000)*4;
    a%=10000;
    x += (a/1000)*3;
    a%=1000;
    x += (a/100)*2;
    a%=100;
    x += (a/10)*1;
    a%=10;
    if((9-(x+1)%10==a)){
        cout << "KLY";
    }
    if((9-(x+2)%10==a)){
        cout << "JVX";
    }
    if((9-(x+3)%10==a)){
        cout << "HU";
    }
    if((9-(x+4)%10==a)){
        cout << "GT";
    }
    if((9-(x+5)%10==a)){
        cout << "FS";
    }
    if((9-(x+6)%10==a)){
        cout << "ER";
    }
    if((9-(x+7)%10==a)){
        cout << "DOQ";
    }
    if((9-(x+8)%10==a)){
        cout << "CIP";
    }
    if((9-(x+9)%10==a)){
        cout << "BNZ";
    }
    if((9-(x)%10==a)){
        cout << "AMW";
    }
}