#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int n;
    cin >> n;
    for(int i=0;i<n;i++) {
        int k;
        cin >> k;
        ll odd = 0;
        for (int j = 0; j < k; j++) {
            int a;
            cin >> a;
            if (a % 2 == 1) {
                odd++;
            }
        }
        if (odd % 2 == 0) {
            cout << "YES" << '\n';
        } else {
            cout << "NO" << '\n';
        }
    }
}