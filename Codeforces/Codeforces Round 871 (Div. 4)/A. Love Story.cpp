#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    string o = "codeforces";
    cin >> n;
    for(int i=0;i<n;i++){
        string a;
        int e=0;
        cin >> a;
        for(int j=0;j<10;j++){
            if(o[j] != a[j]){
                e++;
            }
        }
        cout << e << '\n';
    }
}//
// Created by eric on 2023/5/6.
//
