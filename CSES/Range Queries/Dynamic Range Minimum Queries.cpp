//by_answer
#include <bits/stdc++.h>
using namespace std;

int seg[200000<<2];
int a[200000];

void pull(int id) { seg[id] = min(seg[id * 2], seg[id * 2 + 1]); }

void build(int id, int l, int r) {
    int m = (l + r) / 2;
    if (l == r) {
        seg[id] = a[l];
        return;
    }
    build(2 * id, l, m);//left
    build(2 * id + 1, m + 1, r); //right
    pull(id);
}

int query(int ql, int qr, int l, int r, int id) {
    //cout<<l<<" "<<r<<"\n";
    if (qr < l || r < ql) {
        return 1e9;
    }
    if (ql <= l && r <= qr) {
        return seg[id];
    }
    int m = (l + r) / 2;
    return min(query(ql, qr, l, m, id * 2),
               query(ql, qr, m + 1, r, id * 2 + 1));
}

void update(int p, int v, int l, int r, int id) {
    if (p < l || r < p) {
        return;
    }
    if (l == r) {
        seg[id] = v;
        return;
    }
    int m = (l + r) / 2;
    update(p, v, l, m, id * 2);
    update(p, v, m + 1, r, id * 2 + 1);
    pull(id);
}

int main() {
    int n, q;
    cin >> n >> q;
    int ans;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    build(1, 1, n);
    int a, b, c;
    for (int i = 0; i < q; i++) {
        cin >> a >> b >> c;
        if (a == 1) {
            update(b, c, 1, n, 1);
        } else if (a == 2) {
            ans = query(b, c, 1, n, 1);
            cout << ans << '\n';
        }
    }
}