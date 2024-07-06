#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int i,j;
    while(cin >> i >> j){
        int ans=0,now;
        cout << i << ' ' << j << ' ';
        if(i>j){
            swap(i,j);
        }
        for(int t = i;t<=j;t++){
            now = 1;
            int n = t;
            while(n!=1){
                now++;
                if(n&1){
                    n = 3*n+1;
                }
                else{
                    n= n/2;
                }
            }
            ans = max(ans,now);
        }
        cout << ans << '\n';
    }
}