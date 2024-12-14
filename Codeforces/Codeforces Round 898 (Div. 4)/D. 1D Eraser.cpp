#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastio ios::sync_with_stdio(0);cin.tie(0);

int main() {
    fastio
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n,k;
        cin >> n >> k;
        string a;
        cin >> a;
        int ans=0;
        for(int j=0;j<n;j++){
            if(a[j]=='W'){
                continue;
            }
            if(a[j]=='B'){
                ans++;
                j+=k-1;
            }
        }
        cout << ans << '\n';
    }
}