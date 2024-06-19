#include <bits/stdc++.h>
using namespace std;
#define cheese ios::sync_with_stdio(0);cin.tie(0);

const int maxn = 1e5+5;
map<int,vector<int>> road;
int color[maxn];
bool stuck = false;
void dfs(int now){
    for(auto a:road[now]){
        if(color[now]==1 && color[a] == 0){
            color[a] = 2;
            dfs(a);
        }
        else if(color[now]==2 && color[a] == 0){
            color[a] = 1;
            dfs(a);
        }
        else if(color[now]==color[a] && color[now]!=0){
            stuck = true;
        }
        else if(color[now]==color[a] && color[now]==0){
            color[now] = 1;
            color[a] = 2;
            dfs(a);
        }
    }
}
signed main(){
    cheese
    int n,m;
    cin >> n >> m;
    memset(color,0,sizeof color);
    color[1] = 1;
    for(int i=0;i<m;i++){
        int a,b;
        cin >> a >> b;
        road[a].push_back(b);
        road[b].push_back(a);
    }
    for(int i=1;i<=n;i++){
        dfs(i);
    }
    if(stuck){
        cout << "IMPOSSIBLE";
    }
    else{
        for(int i=1;i<=n;i++){
            if(!color[i]){color[i] = 1;}
            cout << color[i] << ' ';
        }
    }
}


