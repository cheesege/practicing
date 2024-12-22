#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
//#define int ll

signed main() {
    ios::sync_with_stdio(0);
    //cin.tie(0);
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        vector<int> ans;
        int l;
        cin >> l;
        int list[l];
        for(int j=0;j<l;j++){
            int a;
            cin >> a;
            list[j] = a;
        }
        ans.push_back(list[0]);
        for(int j=1;j<l;j++){
            if(list[j] >= list[j-1]){
                ans.push_back(list[j]);
            }
            else{
                ans.push_back(list[j]);
                ans.push_back(list[j]);
            }
        }
        cout << ans.size() << '\n';
        for(int j=0;j<ans.size();j++){
            cout << ans[j] << ' ';
        }
        cout << '\n';
    }
}