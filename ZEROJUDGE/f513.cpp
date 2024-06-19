//working
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m,ans=0;
    cin >> n >> m;
    int area[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int a;
            cin >> a;
            area[i][j] = a;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int same=0;
            if(i-1>=0&&j-1>=0){
                same = same+(area[i][j] == area[i-1][j-1]);
            }
            if(i+1<=n-1&&j+1<=m-1){
                same = same +(area[i][j] == area[i+1][j+1]);
            }
            if(i-1>=0&&j+1<=m-1){
                same = same+(area[i][j] == area[i-1][j+1]);
            }
            if(i+1>=0&&j-1>=0){
                same = same +(area[i][j] == area[i+1][j-1]);
            }
            if(i+1>=0){
                same = same +(area[i][j] == area[i+1][j]);
            }
            if(i-1<=n-1){
                same = same +(area[i][j] == area[i-1][j]);
            }
            if(j+1>=0){
                same = same +(area[i][j] == area[i][j+1]);
            }
            if(j-1<=m-1){
                same = same +(area[i][j] == area[i][j-1]);
            }

            if(same==0){
                ans++;
            }
        }
    }
    cout << ans;
}