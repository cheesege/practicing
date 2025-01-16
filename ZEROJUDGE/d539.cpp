//分塊
#include <bits/stdc++.h>
using namespace std;
//#define int long long
#define cheese ios::sync_with_stdio(0);cin.tie(0);

int block[500005];
int a[500005];
int k;
int query(int l,int r) {
    int ans=0;
    for (int i=l;i<=r;i++) {
        if (i/k!=l/k)break;
        ans = max(ans,a[i]);
    }
    for (int i=r;i>=l;i--) {
        if (i/k!=r/k)break;
        ans = max(ans,a[i]);
    }
    for (int i=l/k+1;i<r/k;i++) {
        ans = max(ans,block[i]);
    }
    return ans;
}
signed main(){
    cheese
    int n;
    cin >> n;
    k = 700;//以根號長度分塊
    for (int i=0;i<n;i++) {
        cin >> a[i];
        block[i/k] = max(block[i/k],a[i]);
    }
    int m;
    cin >> m;
    for (int i=0;i<m;i++) {
        int l,r;
        cin >> l >> r;
        l--;r--;
        if (l>r) swap(l,r);
        cout << query(l,r) << '\n';
    }
}
