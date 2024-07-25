#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    while(n--){
        int a;
        cin >> a;
        int ans = 0;
        for(int i=1;i<=a;i++){
            if(a%i==0){
                ans+=i;
            }
        }
        cout << ans << '\n';
    }
}