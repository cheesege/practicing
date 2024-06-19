#include <iostream>
using namespace std;
#define int long long
signed euclid(int a,int b){
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


signed main(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int a,b;
        cin >> a >> b;
        if(a>b){
            int c = a;
            a = b;
            b = c;
        }
        cout << a*b/euclid(a,b) << '\n';
    }
}