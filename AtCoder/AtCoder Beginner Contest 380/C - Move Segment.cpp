#include <bits/stdc++.h>
using namespace std;
#define int long long
#define cheese ios::sync_with_stdio(0);cin.tie(0);

signed main() {
    cheese
    int n,k;
    string s;
    int left,mid,right=0;
    cin >> n >> k;
    cin >> s;
    int state = 0;
    for(int i=0;i<n;i++){
        if(s[i]=='1' && state==0){
            //cout << 1 << ' ' <<i << '\n';
            k--;
            state = 1;
            mid = i;
            right=0;
        }
        right++;
        if(s[i]=='0' && state==1){
            //cout << 0 << ' ' <<i << '\n';
            state = 0;
            left = i;
        }
        if(k==0){
            //cout << 'k' << ' ' <<i << '\n';
            //cout << left << ' ' << mid << ' ' << right << '\n';
            right=-1;
            for(int j=mid;j<n;j++){
                if(s[j]=='1')right++;
                else break;
            }
            for(int j=left;j<=left+right;j++){
                if(s[j]=='0'){
                    s[j]='1';
                }
                else{
                    s[j]='0';
                }
            }
            for(int j=mid;j<=mid+right;j++){
                if(s[j]=='0'){
                    s[j]='1';
                }
                else{
                    s[j]='0';
                }
            }
            break;
        }
    }
    cout << s;
}