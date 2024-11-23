//floyd-warshall
#include <bits/stdc++.h>
using namespace std;
#define cheese ios::sync_with_stdio(0);cin.tie(0);
#define int long long
int floyd[501][501];

signed main() {
    //cheese
    int n, m, q;
    cin >> n >> m >> q;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            floyd[i][j] = -1;
        }
        floyd[i][i] = 0;
    }
    for (int i = 0; i < m; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        if(floyd[a][b]!=-1){
            floyd[a][b] = min(floyd[a][b],c);
        }
        else{
            floyd[a][b] = c;
        }
        floyd[b][a] = floyd[a][b];
    }
    for(int k=1;k<=n;k++){
        for(int i=1;i<=n;i++){
            if(i==k)continue;
            for(int j=i+1;j<=n;j++){
                if(j==k)continue;
                if(floyd[i][k]==-1){ continue;}
                if(floyd[k][j]==-1){continue;}
                if(floyd[i][j] > floyd[i][k]+floyd[k][j] || floyd[i][j]==-1){
                    floyd[i][j] = floyd[i][k]+floyd[k][j];
                    floyd[j][i] = floyd[i][j];
                }
                //cout << i <<' ' << j << ' ' <<k << ' '<< floyd[i][j]<<'\n';
            }
        }
    }
    for (int i = 0; i < q; i++) {
        int a, b;
        cin >> a >> b;
        cout << floyd[a][b] << '\n';
    }
}



