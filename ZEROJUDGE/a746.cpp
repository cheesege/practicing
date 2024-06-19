#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a,b;
    while(cin >> a >> b){
        int area[a+2][a+2];
        memset(area,0,sizeof area);
        int lx,ly;
        cin >> lx >> ly;
        for(int i=1;i<b;i++){
            int x,y;
            cin >> x >> y;
            if(lx==x){
                for(int j=0;j<=abs(ly-y);j++){
                    area[x-1][min(ly,y)+j-1] = 1;
                }
            }
            else if(ly==y){
                for(int j=0;j<=abs(lx-x);j++){
                    area[min(lx,x)+j-1][y-1] = 1;
                }
            }
            lx = x;
            ly = y;
        }
        for(int j=0;j<a;j++){
            for(int k=0;k<a;k++){
                //cout << area[j][k] << ' ';
            }
            cout << '\n';
        }
        for(int j=0;j<a+2;j++){
            cout << '-';
        }
        cout << '\n';
        for(int j=0;j<a;j++){
            cout << '|';
            for(int k=0;k<a;k++){
                if(area[j][k]==1){
                    cout << '*';
                }
                else{
                    cout << ' ';
                }
            }
            cout << '|' << '\n';
        }
        for(int j=0;j<a+2;j++){
            cout << '-';
        }
    }
}