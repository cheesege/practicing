#include <iostream>
using namespace std;

int euclid(int a,int b){
    int q = a/b;
    int r = a%b;
    if(r == 0){
        return b;
    }
    else{
        a = b;
        b = r;
        return euclid(a,b);
    }
}


int main(){
    int a,b;
    cin >> a >> b;
    if(a<b){
        int c = a;
        a = b;
        b = c;
    }
    int euc = euclid(a,b);
    cout << euc << ' ' << (a*b)/euc ;
}