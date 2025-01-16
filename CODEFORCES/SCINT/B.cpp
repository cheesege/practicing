#include<bits/stdc++.h>
using namespace std;;
int main(){
    int n,m,em=0;
    cin >> n >> m;
    pair<int,int> rp;
    int area[m][n];
    int step[m][n];
    for(int i=0;i<m;i++){
        string a;
        cin >> a;
        for(int j=0;j<n;j++){
            if(a[j]=='.'){
                area[i][j] = 0;
            }
            if(a[j]=='#'){
                area[i][j] = 1;
            }
            if(a[j]=='P'){
                area[i][j] = 2;
            }
        }
    }
    memset(step,-1,sizeof(step));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(area[i][j]==2){
                rp.first=i;
                rp.second=j;
            }
        }
    }
    queue<pair<int,int>> load;
    load.push(rp);
    step[rp.first][rp.second] = 1;
    int dx[4] = {0,1,0,-1};
    int dy[4] = {1,0,-1,0};
    while (!load.empty()){
        pair<int,int> now;
        now = load.front();
        load.pop();
        for(int i=0;i<4;i++){
            if(now.first+dx[i] >= 0 && now.first+dx[i] < m && now.second+dy[i] >= 0 && now.second+dy[i] < n){
                if((area[now.first+dx[i]][now.second+dy[i]] == 0||area[now.first+dx[i]][now.second+dy[i]] == 2) && step[now.first+dx[i]][now.second+dy[i]] == -1){
                    load.push({now.first+dx[i], now.second+dy[i]});
                    step[now.first+dx[i]][now.second+dy[i]] = step[now.first][now.second] + 1;
                }
            }
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(area[i][j]==2&&step[i][j]==-1){
                em=1;
            }
        }
    }
    if(em){
        cout << "No";
    }
    else{
        cout << "Yes";
    }
}