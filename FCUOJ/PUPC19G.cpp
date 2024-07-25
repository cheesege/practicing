//working
#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool ans = true;
int deep;
void dfs(int origin,int edge,int from,int start,int end,map<int,vector<int>> walk){
    for(auto a :walk[start]){
        deep++;
        if(deep>256){
            return;
        }
        if(start==origin && a==end){
            continue;
        }
        else if(a==end){
            ans = false;
        }
        if(a!=from) {
            dfs(origin, edge, start, a, end, walk);
            return;
        }
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int node,edge;
        cin >> node >> edge;
        vector<int> rec(10,0);
        map<int,vector<int>> walk;
        for(int i=0;i<edge;i++){
            int x,y;
            cin >> x >> y;
            walk[x].push_back(y);
            walk[y].push_back(x);
            rec[x]++;
            rec[y]++;
        }
        int big_node = 0,node_a = 0,node_b = 0;
        for(int i = 1;i <= node;i++){
            if(rec[i]>=rec[node_a]){
                node_b = node_a;
                node_a = i;
            }
            if(rec[i]>=3){
                big_node++;
            }
        }
        int will = 0;
        for(int i=1;i<=node;i++){
            if(rec[i]==0){
                cout << 'n' << '\n';
                will = 1;
            }
        }
        if(will){ continue;}
        if(edge < node+1 || node < 4){
            cout << 'n' << '\n';
        }
        else if(edge > node+1){
            cout << "y: there are at least three cycles" << '\n';
        }
        else if((rec[0] > 3 && big_node==1) || big_node>2){
            cout << "y" << '\n';
        }
        else{
            deep = 0;
            dfs(node_a,edge,0,node_a,node_b,walk);
            if(ans){
                cout << "y" << '\n';
            }
            else{
                cout << "y: there are at least three cycles" << '\n';
            }
        }
    }
}