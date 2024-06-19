#include <bits/stdc++.h>
using namespace std;
#define cheese ios::sync_with_stdio(0);cin.tie(0);

const int maxx = 1e5;
int dsu[maxx];
int siz[maxx];
int find_root(int x){
    if(dsu[x]==x){
        return x;
    }
    return dsu[x]= find_root(dsu[x]);
}
void union_root(int x,int y){
    int r_x = find_root(x);
    int r_y = find_root(y);
    if(r_x==r_y){
        return;
    }
    if(siz[r_x]>siz[r_y]){
        swap(r_x,r_y);
    }
    dsu[r_x] = r_y;
    siz[r_y]+=siz[r_x];
}
signed main(){
    cheese
    int n,m;
    cin >> n >> m;
    for(int i=1;i<n+1;i++){
        dsu[i] = i;
        siz[i] = 1;
    }
    for(int i=0;i<m;i++){
        char a;
        int b,c;
        cin >> a >> b >> c;
        if(a=='v' || a=='r'){
            union_root(b,c);
        }
        else{
            cout << siz[find_root(b)]-1 << ' ' << siz[find_root(c)]-1 << ' ';
            if(find_root(b)== find_root(c)){
                cout << "Yes" << '\n';
            }
            else{
                cout << "No" << '\n';
            }
        }
    }
}



