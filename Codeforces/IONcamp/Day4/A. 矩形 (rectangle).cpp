#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


multiset<ll> stick;
int main(){
    //ios::sync_with_stdio(0);
    //cin.tie(0);

    ll n;
    cin >> n;
    for(int i=0;i<n;i++){
        ll a;
        cin >> a;
        stick.insert(a);

    }
    ll choose = 0;
    ll use[2] = {0};
    //cout << "here";
    while(choose!=2 && n>1){
        //cout << "here";
        ll rec,rec2;
        auto it = stick.rbegin();
        rec = *it;
        //cout <<rec<<' ';
        stick.erase(next(it).base());
        n--;

        auto it2 = stick.rbegin();
        rec2 = *it2;
        if(rec == rec2){
            use[choose] = rec;
            choose++;
            stick.erase(next(it2).base());
            n--;
        }
        else{
            continue;
        }
    }
    if(choose==2){
        cout << 1ll*(use[0])*(use[1]);
    }
    else{
        cout << 0;
    }

}