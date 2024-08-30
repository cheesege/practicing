#include <bits/stdc++.h>
using namespace std;
#define int long long
#define cheese ios::sync_with_stdio(0);cin.tie(0);

signed main(){
    //cheese
    int n;
    int now = 0;
    while (cin >> n) {
        if (n <0) {
            return 0;
        }
        now++;
        cout << "Case " << now << ":" << '\n';
        int pre[13];
        int use[13];
        pre[0] = n;
        use[0] = 0;
        for (int i = 1; i <= 12; i++) {
            int a;
            cin >> a;
            pre[i] = a;
            pre[i] = pre[i] + pre[i - 1];
        }
        for (int i = 1; i <= 12; i++) {
            int a;
            cin >> a;
            use[i] = a;
        }
        for (int i = 1; i <= 12; i++) {
            if (pre[i - 1] >= use[i]) {
                cout << "No problem! :D" << '\n';
                for(int j=i;j<=12;j++){
                    pre[j]= pre[j]-use[i];
                }
            }
            else{
                cout << "No problem. :(" << '\n';
            }
        }
    }
}