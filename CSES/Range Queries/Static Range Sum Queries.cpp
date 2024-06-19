//segment tree
//by_answer
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int ll

int seg[int(8e5)];
int a[int(2e5+10)];

void pull(int id){
    seg[id] = seg[id*2] + seg[id*2+1];
}

void build(int id,int l,int r){ //pos
    if(l==r){
        seg[id] = a[l];
        return;
    }
    int m = (l+r)/2;
    build(2*id,l,m);
    build(2*id+1,m+1,r);
    pull(id);
}
int query(int ql,int qr,int l,int r,int id){//查詢左界 查詢右界 節點左界 節點右界 位置
    if(qr < l || ql > r){
        return 0;//無交集
    }
    if(ql <= l && r <= qr){
        return seg[id];
    }
    int m = (r+l)/2;
    return query(ql,qr,l,m,id*2) + query(ql,qr,m+1,r,id*2+1);
}

void update(int p ,int v , int l,int r,int id){//將位置P改成V
    if(p<l || r<p){
        return;
    }
    if(l==r){
        seg[p] = v;
        return;
    }
    int m = (l+r)/2;
    update(p,v,l,m,id*2);//更新左子節點
    update(p,v,m+1,r,id*2+1);//更新右子節點
    pull(id);//合併
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n ,q;
    cin >> n>> q;
    for(int i=1;i<=n;i++){
        cin >> a[i];
    }
    build(1,1,n);
    for(int i=0;i<q;i++){
        int aa,bb;
        cin >> aa >> bb;
        int ans = query(aa,bb,1,n,1);
        cout << ans << '\n';
    }

}