#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

multiset<int> p;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int a;
    while(cin >> a){
        if(a==0){
            break;
        }
        else if(a == -1){
            if(!p.empty()){
                cout << *p.begin() << ' ';
                auto it = p.begin();
                p.erase(it);
            }
        }
        else if(a == -2){
            if(!p.empty()){
                cout << *p.rbegin() << ' ';
                auto it = p.rbegin();
                p.erase(next(it).base());
            }
        }
        else{
            p.insert(a);
        }
    }
}
