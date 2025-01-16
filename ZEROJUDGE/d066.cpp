#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b,c;
    cin >>a>>b;
    c=a*60+b;
    if(c>=1020||c<450){
        cout <<"Off School";
    }
    else{
        cout <<"At School";
    }
}