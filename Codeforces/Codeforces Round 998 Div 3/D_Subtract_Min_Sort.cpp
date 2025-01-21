#include <bits/stdc++.h>
using namespace std;
//#define int long long
#define cheese ios::sync_with_stdio(0);cin.tie(0);


signed main(){
    cheese
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> seq;
        for (int i=0;i<n;i++) {
            int a;
            cin >> a;
            seq.push_back(a);
        }
        for (int i=0;i<n-1;i++) {
            int sub = min(seq[i],seq[i+1]);
            seq[i]-=sub;
            seq[i+1]-=sub;
        }
        bool check = false;
        for (int i=0;i<n-1;i++) {
            if (seq[i]>seq[i+1]) {
                check = true;
                break;
            }
        }
        if (check) {
            cout << "NO\n";
            continue;
        }
        cout << "YES\n";
    }
}
