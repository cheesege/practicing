#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int ans = 0;
        int t;
        cin >> t;
        for(int j=0;j<t;j++){
            int a,b;
            cin >> a >> b;
            if(b<a){
                ans++;
            }
        }
        cout << ans << '\n';
    }
}