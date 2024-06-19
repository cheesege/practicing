#include <iostream>
using namespace std;


int main(){
    int a;
    while(cin >> a){
        if(!a){
            return 0;
        }
        int ans = a;
        while(ans>=10){
            int now = 0;
            while(ans > 0){
                now += ans %10;
                ans /= 10;
            }
            ans = now;
        }
        cout << ans << '\n';
    }

}