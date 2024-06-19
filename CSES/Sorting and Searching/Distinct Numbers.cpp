#include <bits/stdc++.h>
using namespace std;
#define cheese ios::sync_with_stdio(0);cin.tie(0);

set<int> ans;

signed main(){
    cheese
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int a;
        cin >> a;
        ans.insert(a);
    }
    int all=0;
    for(auto r:ans){
        all++;
    }
    cout << all;
}


