#include <bits/stdc++.h>
using namespace std;
#define cheese ios::sync_with_stdio(0);cin.tie(0);

const int maxn =1e5+5;
map<int,vector<int>> road;
vector<int> connect;
bool visited[maxn];
void dfs(int node){
    visited[node] = true;
    for(auto a : road[node]){
        if(!visited[a]){
            dfs(a);
        }
    }
}
signed main(){
    cheese
    int n,m;
    cin >> n >> m;
    memset(visited, false,sizeof visited);
    for(int i=0;i<m;i++){
        int a,b;
        cin >> a >> b;
        road[a].push_back(b);
        road[b].push_back(a);
    }
    for(int i=1;i<=n;i++){
        if(!visited[i]){
            connect.push_back(i);
            dfs(i);
        }
    }
    cout << connect.size()-1 << '\n';
    for(int i=0;i<connect.size()-1;i++){
        cout << connect[i] << ' ' << connect[i+1] << '\n';
    }
}


