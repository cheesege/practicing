#include <bits/stdc++.h>
using namespace std;
#define int long long
#define cheese ios::sync_with_stdio(0);cin.tie(0);

int k,m,slot;
void move(int avg,int loli[],int kth){
    kth++;
    int pos;
    for(int i=0;i<slot;i++){
        if(loli[i]<avg){
            pos = i;
            break;
        }
    }
    for(int i=0;i<slot;i++){
        if(loli[i]>avg){
            int cost = min(abs(loli[pos]-avg),abs(loli[i]-avg));
            loli[i]-=cost;
            loli[pos]+=cost;
            move(avg,loli,kth);
            loli[i]+=cost;
            loli[pos]-=cost;
        }
    }
    for(int i=0;i<slot;i++){
        if(loli[i]!=avg){
            break;
        }
        if(i==slot-1){
            k= kth;
            m++;
        }
    }
}

signed main(){
    //cheese
    int t;
    cin >> t;
    while (t--){
        cin >> slot;
        int lolipop[slot];
        int all=0;
        for(int i=0;i<slot;i++){
            int a;
            cin >> a;
            lolipop[i]=a;
            all+=a;
        }
        all/=slot;
        k=0,m=0;
        move(all,lolipop,0);
        cout << k-1 << ' ' << m << '\n';
    }
}