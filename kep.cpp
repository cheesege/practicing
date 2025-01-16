#include <bits/stdc++.h>

#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

const int N = 5e5+5;
int k;

int a[N];
int block[N];

int query(int l, int r){
    int ans = -1;
    for(int i = l;i <= r;i++){
        if(i/k!=l/k) break;
        ans = max(ans,a[i]);
    }
    for(int i = r;i >= l;i--){
        if(i/k!=r/k) break;
        ans = max(ans,a[i]);
    }
    for(int i = l/k+1;i < r/k;i++) ans = max(ans,block[i]);
    return ans;
}

signed main(){
    fastio
    int n;
    cin >> n;
    k = sqrt(n);
    for(int i = 0;i < n;i++) cin >> a[i];
    for(int i = 0;i <= n;i++) block[i/k] = max(block[i/k],a[i]);
    int m;
    cin >> m;
    while(m--){
        int l, r;
        cin >> l >> r;
        l--,r--;
        if(l>r)swap(l,r);
        cout << query(l,r) << "\n";
    }
}