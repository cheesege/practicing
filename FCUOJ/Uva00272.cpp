#include <bits/stdc++.h>
using namespace std;

int main(){
    string a;
    int mode = 1;
    while(getline(cin,a)){
        int n = a.size();
        for(int i=0;i<n;i++){
            if(a[i] == '"' && mode == 1){
                a[i] = '`';
                a.insert(i+1,1,'`');
                mode = 2;
                n++;
                continue;
            }
            if(a[i] == '"' && mode == 2){
                a[i] = '\'';
                a.insert(i+1,1,'\'');
                mode = 1;
                n++;
                continue;
            }
        }
        cout << a << '\n';
    }
}