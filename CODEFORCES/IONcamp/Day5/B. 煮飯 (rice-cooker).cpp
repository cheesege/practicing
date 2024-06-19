#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll t,n;
vector<ll> mp;
bool check(ll x){
    ll tt=0;
    for(ll a:mp){tt+=1ll*(x/a);if (tt >= t) break;}

    return tt >= t;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll ans;
    cin >> n >>t;
    for(ll i=0;i<n;i++){
        ll a;
        cin >> a;
        mp.push_back(a);
    }
    //sort(mp.begin(), mp.end());
    ll l = 0;
    ll r = 8e18;
    while(l < r){
        ll m = (l+r)/2;
        if(check(m)){
            r = m;
            ans = r;
        }
        else l = m+1;

    }
    cout << ans;

}