#include<bits/stdc++.h>
using namespace std;;

int main(){
    int k,hc,fe=0,hi,ht;
    cin >> k;
    int score[2][k];
    for(int i=0;i<k;i++){
        int a,b;
        cin >>a>>b;
        score[0][i] = a;
        score[1][i] = b;
    }
    hi = score[1][0];
    ht = score[0][0];
    for(int i=0;i<k;i++){
        if(score[1][i]>hi){
            ht = score[0][i];
            hi = score[1][i];
        }
        if(score[1][i]==-1){
            fe++;
        }
    }
    //cout <<hi<<' '<<fe<<'\n';
    hc = hi-k-fe*2;
    if(hc<0){
        hc=0;
    }
    cout << hc << ' ' <<ht;
}