#include<bits/stdc++.h>
using namespace std;;

int main(){
    int n;
    string x;
    int tm=0;
    int tf=0;
    int t=0;
    cin >> n;
    cin >> x;
    for(int i=0;i<n;i++){
        if(x[i]=='M'){
            tm++;
        }
        if(x[i]=='F'){
            tf++;
        }
    }
    if(tm==0&&tf!=0){
        cout << "Yes";
        tm++;
        t++;
    }
    if(tm!=0&&tf==0){
        cout << "Yes";
        tf++;
        t++;
    }
    if(tm==0&&tf==0){
        cout << "Yes";
    }
    for(int i=0;i<n-1;i++){
        if(x[i]=='M'){
            if(x[i+1]=='M'&&t==0){
                cout << "No";
                t++;
            }
        }
        else if(x[i]=='F'&&t==0){
            if(x[i+1]=='F'){
                cout << "No";
                t++;
            }
        }
    }
    if(t==0){
        cout << "Yes";
    }

}