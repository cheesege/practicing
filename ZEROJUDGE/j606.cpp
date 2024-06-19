//by_answer
#include<bits/stdc++.h>
using namespace std;
string s;
int k,q,r,p[20];
int main(){
    cin>>k>>q>>r>>s;
    vector<vector<char>>ans(r,vector<char>(q,' '));
    for(int i=0;i<q;i++){
        for(int j=0;j<k;j++){
            cin>>p[j];
        }
        string tmp=s;
        for(int j=0;j<k;j++){
            s[p[j]-1]=tmp[j];
        }
        for(int j=0;j<r;j++){
            ans[j][i]=s[j];
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<q;j++){
            cout<<ans[i][j];
        }
        cout<<"\n";
    }
}