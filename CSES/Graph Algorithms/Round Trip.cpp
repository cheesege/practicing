#include <bits/stdc++.h>
using namespace std;
#define cheese ios::sync_with_stdio(0);cin.tie(0);

const int maxn = 1e5;
bool pass[maxn+1];
int path[maxn+1];
map<int,vector<int>> edge;
bool dfs(int ori,int from){
    pass[from] = 1;
    path[from] = ori;
    for(auto a:edge[from]){
        if(a==ori){
            continue;
        }
        if(pass[a]){
            vector<int> ans;
            int cur =from;
            ans.push_back(a);
            while (cur!=a){
                ans.push_back(cur);
                cur = path[cur];
            }
            ans.push_back(a);

            cout << ans.size() << '\n';
            for(auto b:ans){
                cout << b << ' ';
            }
            return true;
        }
        else{
            if(dfs(from,a)){
                return true;
            }
        }
    }
    return false;
}

signed main(){
    //cheese
    int n,m;
    cin >> n >> m;
    for(int i=1;i<=n;i++){
        edge[i] = {};

    }
    for(int i=0;i<m;i++){
        int a,b;
        cin >> a >> b;
        edge[a].push_back(b);
        edge[b].push_back(a);
    }
    for(int i=1;i<=n;i++){
        if(!pass[i]){
            if(dfs(-1,i)){
                return 0;
            }
        }
    }
    cout << "IMPOSSIBLE" << endl;
    return 0;
}



