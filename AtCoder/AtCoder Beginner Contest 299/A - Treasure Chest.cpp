//stupid
#include<bits/stdc++.h>
using namespace std;;

int main(){
    int a;
    cin >> a;
    string stor;
    int side =0;
    int y=0;
    cin >> stor;
    for(int i=0;i<a;i++){
        if(stor[i]=='|' && side == 0){
            side++;
        }
        else if(stor[i]=='|' && side == 1){
            side++;
        }
        if(stor[i]=='*' && side == 1){
            y=1;
        }

    }
    if(y==1 && side==2){
        cout << "in";
    }
    else{
        cout << "out";
    }
}