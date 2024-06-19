#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fastio ios::sync_with_stdio(0);cin.tie(0);

signed main(){
    fastio;
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        int x,y;
        cin >> x >> y;
        int area[x][y];
        memset(area,0, sizeof area);
        for(int j=0;j<x;j++){
            string a;
            cin >> a;
            for(int k=0;k<y;k++){
                if(a[k] == '#'){
                    area[j][k] = 1;
                }
            }
        }
        pair<int,int> px = {-1,-1};
        pair<int,int> py = {-1,-1};
        for(int j=0;j<x;j++){
            for(int k=0;k<y;k++){
                if(area[j][k] == 1){
                    px.first = j;
                    break;
                }
            }
            if(px.first + 1){
                break;
            }
        }
        for(int j=x-1;j>=0;j--){
            for(int k=y-1;k>=0;k--){
                if(area[j][k] == 1){
                    px.second = j;
                    break;
                }
            }
            if(px.second + 1){
                break;
            }
        }
        for(int j=0;j<y;j++){
            for(int k=0;k<x;k++){
                if(area[k][j] == 1){
                    py.first = j;
                    break;
                }
            }
            if(py.first + 1){
                break;
            }
        }
        for(int j=y-1;j>=0;j--){
            for(int k=x-1;k>=0;k--){
                if(area[k][j] == 1){
                    py.second = j;
                    break;
                }
            }
            if(py.second + 1){
                break;
            }
        }
        cout << (px.first+px.second)/2+1 << ' ' <<(py.first+py.second)/2+1 << '\n';
    }
}//
// Created by Eric on 2024/6/12.
//
