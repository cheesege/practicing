#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n;
    cin >> n;
    int area[25][25];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int a;
            cin >> a;
            area[i][j] = a;
        }
    }
    int ans[n/2+2][n/2+2];
    for(int i=0,ii=0;i<n;i+=2,ii++){
        for(int j=0,jj=0;j<n;j+=2,jj++){
            //cout << (area[i][j])<<' '<<(area[i+1][j])<<' '<<(area[i][j+1])<<' '<<(area[i+1][j+1]) << '\n';
            ans[ii][jj] = max({(area[i][j]),(area[i+1][j]),(area[i][j+1]),(area[i+1][j+1])});
        }
    }
    for(int i=0;i<n/2;i++){
        for(int j=0;j<n/2;j++){
            cout << ans[i][j] << ' ';
        }
        cout << '\n';
    }
}