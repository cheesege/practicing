#include <iostream>
using namespace std;

int main(){
    int a;
    int cas=0;
    while(cin >> a){
        if(a==-1){
            return 0;
        }
        int ans=0;
        int now = 1;
        cas++;
        while(now < a){
            ans++;
            now *= 2;
        }
        cout << "Case " << cas << ": " << ans << '\n';
    }
}