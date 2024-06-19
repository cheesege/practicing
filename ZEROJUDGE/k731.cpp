#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,r=0,t=0,l=0;
    cin >> n;
    int a,b,w=0,la,lb,lw=1;
    cin >> la >> lb;
    for(int i=0;i<n-1;i++){
        cin >> a >> b;
        if(a>la){
            w=1;
        }
        else if(b<lb){
            w=2;
        }
        else if(a<la){
            w=3;
        }
        else if(b>lb){
            w=4;
        }

        if((lw==1&&w==2)||(lw==2&&w==3)||(lw==3&&w==4)||(lw==4&&w==1)){
            r++;
        }
        else if((lw==1&&w==4)||(lw==4&&w==3)||(lw==3&&w==2)||(lw==2&&w==1)){
            l++;
        }
        else if((lw==1&&w==3)||(lw==2&&w==4)||(lw==3&&w==1)||(lw==4&&w==2)){
            t++;
        }
        la = a;
        lb = b;
        lw = w;
    }
    cout << l << ' ' << r << ' ' << t;
}
