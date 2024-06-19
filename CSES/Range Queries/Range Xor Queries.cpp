#include <bits/stdc++.h>
using namespace std;

#define cheese ios::sync_with_stdio(0);cin.tie(0);
const int limit = 2e5;
int seg[4*limit];
int num[limit];
void pull(int id){//左右節點XOR
    seg[id] = seg[id*2] ^ seg[id*2+1];
}

void build(int id,int l,int r){
    if(l==r){
        seg[id] = num[l];
        return;
    }
    int m = (l+r)/2;
    build(2*id,l,m);
    build(2*id+1,m+1,r);
    pull(id);
}
int query(int ql,int qr,int l,int r,int id){
    if(qr < l || ql > r){
        return 0;//查詢無效
    }
    if(ql <= l && qr >= r){
        return seg[id];//查詢剛好在節點內
    }
    int m = (l+r)/2;
    return query(ql,qr,l,m,id*2) ^ query(ql,qr,m+1,r,id*2+1);//對查詢XOR
}

signed main() {
    cheese
    int n,q;
    cin >> n>>q;
    for(int i=1;i<=n;i++){
        int a;
        cin >> a;
        num[i] = a;
    }
    build(1,1,n);
    for(int i=0;i<q;i++){
        int a, b;
        cin >> a >> b;
        cout << query(a,b,1,n,1) << '\n';
    }
}
