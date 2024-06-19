#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastio ios::sync_with_stdio(0);cin.tie(0);

int main() {
    //fastio
    int r,c,m;
    while(cin >> r >> c >> m){
        int status = 0;
        int maxx = max(r,c);
        int area[maxx][maxx];
        int copy[maxx][maxx];
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                int a;
                cin >> a;
                area[i][j] = a;
            }
        }
        int action[m];
        for(int k=0;k<m;k++){
            int a;
            cin >> a;
            action[k] =a;
        }
        reverse(action,action+m);
        for(int k=0;k<m;k++){
            int a = action[k];
            if(a){
                if(!status){
                    for(int i=0;i<r;i++){
                        for(int j=0;j<c;j++){
                            copy[abs(r-1-i)][j] = area[i][j];
                        }
                    }
                    for(int i=0;i<r;i++){
                        for(int j=0;j<c;j++){
                            area[i][j] = copy[i][j];
                        }
                    }
                    continue;
                }
                if(status){
                    for(int i=0;i<c;i++){
                        for(int j=0;j<r;j++){
                            copy[abs(c-1-i)][j] = area[i][j];
                        }
                    }
                    for(int i=0;i<c;i++){
                        for(int j=0;j<r;j++){
                            area[i][j] = copy[i][j];
                        }
                    }
                }
                continue;
            }
            if(!a){
                if(!status){
                    for(int i=0;i<r;i++){
                        for(int j=0;j<c;j++){
                            copy[c-1-j][i] = area[i][j];
                        }
                    }
                    for(int i=0;i<c;i++){
                        for(int j=0;j<r;j++){
                            area[i][j] = copy[i][j];
                        }
                    }
                    status=1;
                    continue;
                }
                if(status){
                    for(int i=0;i<c;i++){
                        for(int j=0;j<r;j++){
                            copy[r-1-j][i] = area[i][j];
                        }
                    }
                    for(int i=0;i<r;i++){
                        for(int j=0;j<c;j++){
                            area[i][j] = copy[i][j];
                        }
                    }
                    status=0;
                    continue;
                }
            }
        }
        if(!status){
            cout << r <<' '<< c << '\n';
            for(int i=0;i<r;i++){
                cout << area[i][0];
                for(int j=1;j<c;j++){
                    cout <<' '<<area[i][j];
                }
                cout << '\n';
            }
            continue;
        }
        if(status){
            cout << c <<' '<< r << '\n';
            for(int i=0;i<c;i++){
                cout << area[i][0];
                for(int j=1;j<r;j++){
                    cout <<' '<<area[i][j];
                }
                cout << '\n';
            }
            continue;
        }
    }
}