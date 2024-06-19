#include <bits/stdc++.h>
using namespace std;
#define cheese ios::sync_with_stdio(0);cin.tie(0);
signed main(){
    cheese
    int n;
    cin >> n;
    vector<int>eat;
    vector<int>write;
    for(int i=0;i<n;i++){
        int a;
        cin >> a;
        eat.push_back(a);
    }
    int minimal=0,full=0,log=-1;
    sort(eat.begin(),eat.end());
    for(int i =0;i<n;i++){
        if(eat[0]== minimal){
            minimal++;
        }
        if(eat[0]==log){
            eat.push_back(eat[0]);
            eat.erase(eat.begin());
        }
        else{
            write.push_back(eat[0]);
            log = eat[0];
            eat.erase(eat.begin());
        }
        full+=minimal;

    }
    for(auto i : eat){
        full+=minimal;
        write.push_back(i);
    }
    cout << full << '\n';
    for(auto i : write){
        cout << i << ' ';
    }
}



