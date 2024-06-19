#include <bits/stdc++.h>
using namespace std;
#define cheese ios::sync_with_stdio(0);cin.tie(0);

int dsu[10001];

void build(int n){
    for(int i=1;i<=n;i++){
        dsu[i] = i;
    }
}
int Find(int x){
    if(dsu[x]==x){
        return x;
    }
    return Find(dsu[x]);
}
void Union(int a,int b){
    int g1 = Find(a);
    int g2 = Find(b);
    if(g1!=g2){
        dsu[g2] = g1;
    }
}

signed main(){
    cheese
    int n,m,q;
    cin >> n >> m >> q;
    build(n);
    for(int i=0;i<m;i++){
        int a, b;
        cin >> a >>b;
        Union(a,b);
    }
    for(int i=0;i<q;i++){
        int a,b;
        cin >> a >>b;
        if(Find(a)==Find(b)){
            cout << ":)" <<'\n';
        }
        else{
            cout << ":(" << '\n';
        }
    }
}

