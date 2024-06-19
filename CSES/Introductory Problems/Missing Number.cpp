#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    ll n;
    vector<ll> box;
    cin >> n;
    int spe=0;
    if(n==2){spe++;}
    for(int i=1;i<n;i++){
        ll a;
        cin >> a;
        if(a==2){spe++;}
        box.push_back(a);
    }
    if(spe==2){cout << 1;return 0;}
    sort(box.begin(), box.end());
    for(int i=0;i<n-1;i++){
        if(box[i+1]!=box[i]+1){
            cout << box[i] + 1;
            break;
        }
    }
}