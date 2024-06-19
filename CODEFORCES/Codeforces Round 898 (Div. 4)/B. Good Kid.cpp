#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastio ios::sync_with_stdio(0);cin.tie(0);

int main() {
    fastio
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        vector<int> num;
        for(int j=0;j<n;j++){
            int a;
            cin >> a;
            num.push_back(a);
        }
        sort(num.begin(),num.end());
        num[0] = num[0]+1;
        int ans=num[0];
        for(int j=1;j<n;j++){
            ans = ans*num[j];
        }
        cout << ans << '\n';
    }
}