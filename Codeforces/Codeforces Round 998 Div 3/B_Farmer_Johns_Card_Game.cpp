#include <bits/stdc++.h>
using namespace std;
//#define int long long
#define cheese ios::sync_with_stdio(0);cin.tie(0);


signed main(){
    cheese
    int t;
    cin >> t;
    while (t--) {
        int n,m;
        cin >> n >> m;
        vector<int> cow[n+1];
        vector<pair<int,int>> order;
        for (int i=1;i<=n;i++) {
            for (int j=0;j<m;j++) {
                int a;
                cin >> a;
                cow[i].push_back(a);
            }
            sort(cow[i].begin(),cow[i].end());
            order.push_back({cow[i][0],i});
        }
        sort(order.begin(),order.end());
        bool check = false;
        for (int i=0;i<n;i++) {
            for (int j=0;j<m;j++) {
                if (cow[order[i].second][j] != i+j*n) {
                    check = true;
                }
            }
        }
        if (check) {
            cout << -1 << '\n';
            continue;
        }
        for (int i=0;i<n;i++) {
            cout << order[i].second;
            cout << " \n"[i==n-1];
        }
    }
}
