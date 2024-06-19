//by_answer
#include <iostream>
using namespace std;

int main(){
    int a;
    while(cin >> a){
        int ans = 0;
        ans+=a;
        ans+=a/2;
        cout << ans << '\n';
    }
}