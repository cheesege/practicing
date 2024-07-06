#include <iostream>
using namespace std;
#define ll long long
int main(){
    int n;
    cin >> n;
    for(int t=0;t<n;t++) {
        int b, e;
        cin >> b >> e;
        int ans=0;
        for (int i = b; i <= e; i++) {
            int now = i;
            while (now) {
                if(now&1){
                    ans++;
                }
                now = now>>1;
            }
        }
        cout << ans << '\n';
    }
}