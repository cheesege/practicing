#include <bits/stdc++.h>
using namespace std;
#define cheese ios::sync_with_stdio(0);cin.tie(0);
#define int long long

map<int,vector<int>>tree;
int root[100001];
int rec[100001];
void treeheight(int parent){
    if(tree[parent].size()==0){
        rec[parent] =0;
        return;
    }
    int nh=-1;
    for(auto a:tree[parent]){
        treeheight(a);
        nh = max(rec[a]+1,nh);
    }
    rec[parent]= nh;
}

signed main() {
    //cheese
    int n;
    cin >> n;
    for(int i=1;i<=n;i++){
        int a;
        cin >> a;
        tree[i] = {};
        for(int j=0;j<a;j++){
            int b;
            cin >> b;
            tree[i].push_back(b);
            root[b]=1;
        }
    }
    int rt;
    for(int i=1;i<=n;i++){
        if(root[i]==0){
            rt = i;
            break;
        }
    }
    int sum=0;
    treeheight(rt);
    for(int i=1;i<=n;i++){
        sum+=rec[i];
    }
    cout << rt <<'\n' << sum;
}



