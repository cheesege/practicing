#include <iostream>
using namespace std;

int main(){
    int a,b;
    while(cin >> a >> b){
        if(a == -1){
            return 0;
        }
        if(a>b){
            int c = a;
            a = b;
            b = c;
        }
        int ans = (b-a>50 ? 100-b+a : b-a);
        cout << ans << '\n';
    }
}