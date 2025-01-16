#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
#define int long long
//#define cheese ios::sync_with_stdio(0);cin.tie(0);

bool cmp(pair<pair<int,int>,int> a,pair<pair<int,int>,int> b){
    if(a.second==b.second){
        return true;
    }
    return a.second<b.second;
}
int dsu[100000];
void init(int n){
    for(int i=0;i<n;i++){
        dsu[i] = i;
    }
}
int parent(int n){
    if(dsu[n]==n){
        return n;
    }
    return dsu[n] = parent(dsu[n]);
}
void uniom(int a,int b){
    dsu[parent(b)] = parent(a);
}
vector<pair<pair<int,int>,int>> graph;
signed main() {
    int n,m;
    while (cin >> n >> m){
        int ans = 0;
        graph.clear();
        init(n);
        for(int i=0;i<m;i++){
            int a,b,c;
            cin >> a >> b >> c;
            graph.push_back({{a,b},c});
        }
        if(n==1){
            cout << 0 << '\n';
            continue;
        }
        sort(graph.begin(),graph.end(),cmp);
        for(auto unit : graph){
            if(parent(unit.first.first) == parent(unit.first.second)){
                continue;
            }
            ans +=unit.second;
            uniom(unit.first.first,unit.first.second);
        }
        int self = 0;
        for(int i=0;i<n;i++){
            if(dsu[i] == i){
                self++;
            }
        }
        if(self>1){
            cout << -1 << '\n';
            continue;
        }
        cout << ans << '\n';
    }
}