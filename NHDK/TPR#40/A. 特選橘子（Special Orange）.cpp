#include <bits/stdc++.h>
using namespace std;;
#define fastio ios_base::sync_with_stdio(0), cin.tie(0);
#define int long long

signed main(){
    int n,m;
    cin >> n >> m;
    vector<int> orange;
    for(int i=0;i<n;i++){
        int a;
        cin >> a;
        orange.push_back(a);
    }
    sort(orange.begin(),orange.end());
    for(int i=0;i<m;i++){
        int a;
        cin >> a;
        int l=0,r=n,mid;
        while (l<r){
            mid = (l+r)/2;
            //cout << l << ' ' << r << ' '<< mid << '\n';
            if(orange[mid]<a){
                l = mid+1;
            }
            else if(orange[mid]>=a){
                r = mid;
            }
        }
        mid = (l+r)/2;
        if(orange[mid] == a){
            cout << "YES" << '\n';
        }
        else{
            cout << "NO" << '\n';
        }
    }
}