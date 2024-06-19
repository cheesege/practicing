#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n,m,block=0;
    cin >> n >> m;
    int area[n][m];
    for(int i=0;i<n;i++){
        string a;
        cin >> a;
        for(int j=0;j<m;j++){
            if(a[j]=='.'){
                area[i][j] = 0;
            }
            else if(a[j]=='#'){
                area[i][j] = 1;
            }

        }
    }
    int dx[4] = {0,1,0,-1};
    int dy[4] = {1,0,-1,0};
    queue<pair<int,int>> q;
    pair<int,int> now;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(area[i][j] == 0){
                block++;
                q.push({i,j});
                while(!q.empty()){
                    now = q.front();
                    q.pop();
                    for(int k=0;k<4;k++){
                        if(now.first+dy[k] < n &&now.first+dy[k] >=0 &&now.second+dx[k] >=0 &&now.second+dx[k] <m){
                            if(area[now.first+dy[k]][now.second+dx[k]]==0){
                                q.push({now.first+dy[k],now.second+dx[k]});
                                area[now.first+dy[k]][now.second+dx[k]]=1;
                            }
                        }
                    }
                }
            }
        }
    }
    cout << block;
}