#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        int n,ll=0,nl=0;
        cin >> n;
        for(int j=0;j<n;j++){
            int a;
            cin >> a;
            if(a==1){
                if(nl>ll){
                    ll = nl;
                }
                nl=0;
            }
            else if(a==0){
                nl++;
            }
        }
        if(nl>ll){
            ll = nl;
        }
        cout << ll << '\n';
    }
}