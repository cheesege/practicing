#include <bits/stdc++.h>
using namespace std;
#define int long long
#define cheese ios::sync_with_stdio(0);cin.tie(0);

signed main(){
    //cheese
    int ero[1000002] = {0};
    for(int i=2;i<1000002;i++){
        if(ero[i]==0){
            int shi = i*2;
            while (shi<1000002){
                ero[shi] = 1;
                shi+=i;
            }
        }
    }
    for(int i=2;i<1000002;i++){
        if(ero[i]==0){
            string si = to_string(i);
            reverse(si.begin(),si.end());
            int ii = stoll(si);
            if((ero[ii]==0 ||ero[ii]==2)&& i!=ii && to_string(ii)==si){
                ero[i] = 2;
            }
        }
    }
    int a;
    while(cin >> a){
        if(ero[a]==0){
            cout << a << " is prime." << '\n';
        }
        else if(ero[a]==1){
            cout << a << " is not prime." << '\n';
        }
        else{
            cout << a << " is emirp." << '\n';
        }
    }
}