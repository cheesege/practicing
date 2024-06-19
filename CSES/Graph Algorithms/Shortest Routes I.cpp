//by_answer
#include <bits/stdc++.h>
using namespace std;
#define cheese ios::sync_with_stdio(0);cin.tie(0);cout,tie(0);
#define int long long

int n, m, a, b, c;
long long ans[100005];
vector <pair <int, int> > road[100005];

signed main() {
    cin >> n >> m;
    for (int i = 0; i < m; i++){
        cin >> a >> b >> c;
        road[a].push_back({b, c});
    }
    memset(ans, 0x3F, sizeof(ans));
    ans[1] = 0;
    priority_queue <pair <long long, int>, vector<pair<long long, int> >, greater<pair<long long, int> > > pq;
    pq.push({0, 1});
    while (!pq.empty()){
        auto now = pq.top();
        pq.pop();
        if (now.first > ans[now.second]) continue;
        for (auto i:road[now.second]){
            if (ans[i.first] > ans[now.second] + i.second){
                ans[i.first] = ans[now.second] + i.second;
                pq.push({ans[i.first], i.first});
            }
        }
    }
    for (int i = 1; i <= n; i++){
        cout << ans[i] << " ";
    }
}



