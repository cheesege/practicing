#include <bits/stdc++.h>
using namespace std;
#define int long long
#define cheese ios::sync_with_stdio(0);cin.tie(0);

signed main(){
    //cheese
    int n;
    cin >> n;
    for(int i=1;i<=n;i++){
        int s1;
        string s2;
        cin >> s1;
        int times=0,ans=s1;
        while (s1!=1 && times<10000){
            s2 = to_string(s1);
            s1=0;
            for(auto a:s2){
                s1+=(a-'0')*(a-'0');
            }
            times++;
        }
        if(times<10000){
            cout << "Case #" << i << ": " << ans << " is a Happy number." << '\n';
        }
        else{
            cout << "Case #" << i << ": " << ans << " is an Unhappy number." << '\n';
        }
    }
}