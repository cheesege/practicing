#include <iostream>
using namespace std;


int main(){
    int a,b;
    while(cin >> a >> b){
        if(a == 0 && b == 0){
            return 0;
        }
        int ans = 0;
        while(a > 0 || b > 0){
            if(a % 10 + b % 10 >= 10){
                ans ++;
                a/=10;
                b/=10;
                a++;
            }
            else{
                a/=10;
                b/=10;
            }
        }
        if(ans == 0){
            cout << "No carry operation." << '\n';
        }
        else if(ans == 1){
            cout << "1 carry operation." << '\n';
        }
        else{
            cout << ans << " carry operations." << '\n';
        }
    }
}