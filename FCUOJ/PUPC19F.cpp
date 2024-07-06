#include <bits/stdc++.h>
using namespace std;
#define ll long long

string unzip(string a){
    string stable,store;
    int times = a[0]-'0';
    int mode = 0;
    int l=0,r=0;
    for(int i=0;i<times;i++){
        for(int j=2;j<a.size()-1;j++){
            if(mode==0){
                if((a[j]-'0')<10){
                    mode = 1;
                }
                else{
                    stable += a[j];
                }
            }
            if(mode == 1){
                store+=a[j];
                if(a[j]=='['){
                    l++;
                }
                if(a[j]==']'){
                    r++;
                }
                if(l==r && l!=0){
                    stable+=unzip(store);
                    store = "";
                    mode = 0;
                    l=0;
                    r=0;
                }
            }
        }
    }
    return stable;
}

int main(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        string a;
        cin >> a;
        a = "1[" + a + "]";
        cout << unzip(a) << '\n';
    }
}