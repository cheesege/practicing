#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    ll n,ans=0;
    vector<ll> arr;
    cin >> n;
    for(int i=0;i<n;i++){
        ll a;
        cin >> a;
        arr.push_back(a);
    }
    for(int i=1;i<n;i++){
        if(arr[i]<arr[i-1]){
            ans = ans + abs(arr[i]-arr[i-1]);
            arr[i] = arr[i-1];
        }
    }
    cout << ans;
}