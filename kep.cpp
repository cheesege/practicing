#include <bits/stdc++.h>
using namespace std;
#define int long long
#define cheese ios::sync_with_stdio(0);cin.tie(0);

signed main() {
    //cheese
    // (L, R) (範圍不含 L 跟 R)
while(R-L > 1){
  int mid = L + R >> 1;
  if(check(mid)) L = mid;
  else R = mid;
}
}