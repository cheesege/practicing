#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

multiset<ll> tic;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll n,m;
    cin >> n >> m;
    for(int i=0;i<n;i++){
        ll a;
        cin >> a;
        tic.emplace(-a);
    }
    for(int j=0;j<m;j++){
        ll a;
        cin >> a;
        auto it = tic.lower_bound(-a);
        if(it != tic.end()){
            cout << -1*(*it) << '\n';
            tic.erase(it);
        }
        else{
            cout << "-1"<< '\n';
        }

    }
}