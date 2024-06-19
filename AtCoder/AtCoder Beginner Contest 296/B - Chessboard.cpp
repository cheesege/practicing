#include<bits/stdc++.h>
using namespace std;;

int main(){
    string a;
    pair<int,int> pos;
    int chess[8][8];
    for(int i=7;i>=0;i--){
        cin >> a;
        for(int j=0;j<8;j++){
            chess[i][j] = a[j];
            if(a[j]=='*'){
                pos = make_pair(i,j);
            }
        }
    }
    pos.first = pos.first+1;
    pos.second = pos.second+1;
    if(pos.second==1){cout << 'a';}
    if(pos.second==2){cout << 'b';}
    if(pos.second==3){cout << 'c';}
    if(pos.second==4){cout << 'd';}
    if(pos.second==5){cout << 'e';}
    if(pos.second==6){cout << 'f';}
    if(pos.second==7){cout << 'g';}
    if(pos.second==8){cout << 'h';}
    cout << pos.first;
}