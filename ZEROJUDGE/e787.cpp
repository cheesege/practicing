#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    cin >> n >> m;
    int teasure[n][m];
    int trans[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int a;
            cin >> a;
            teasure[i][j] = a;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int a;
            cin >> a;
            trans[i][j] = a;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int suma=0;
            for(int ii=0;ii<n;ii++){
                suma+=trans[ii][j];
            }
            for(int ii=0;ii<m;ii++){
                suma+=trans[i][ii];
            }
            suma -= trans[i][j];
            //cout << i << ' ' << j << ' ' << suma << '\n';
            if(suma%2==1){
                if(teasure[i][j]){
                    teasure[i][j] = 0;
                }
                else if(!teasure[i][j]){
                    teasure[i][j] = 1;
                }
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout << teasure[i][j] << ' ';
        }
        cout << '\n';
    }
}