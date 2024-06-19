#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(0);cin.tie(0);

char store[100][100][2];
signed main(){
    fastio;
    string a;
    int now = -1,m_now = 0;
    while(getline(cin,a)){
        now++;
        int ma = a.size();
        m_now = max(m_now,ma);
        for(int i=0;i<a.size();i++){
            store[now][i][0] = a[i];
            store[now][i][1] = '1';
        }
        for(int i=0;i<m_now;i++){
            if(store[now][i][1] == '\0'){
                store[now][i][0] = ' ';
                store[now][i][1] = '1';
            }
        }
    }
    for(int i=0;i<100;i++){
        for(int j=100;j>=0;j--){
            if(store[j][i][1]== '1'){
                cout << store[j][i][0];
            }
        }
        cout << '\n';
    }

}