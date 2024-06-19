#include<bits/stdc++.h>
using namespace std;;

int main(){
    int s;
    int cas = 1;
    while(cin >> s){
        int n,m;
        cin >> n >> m;
        int area[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int a;
                cin >> a;
                area[i][j] = a;
            }
        }
        int dis[n][m];
        int dx[4] = {0,0,1,-1};
        int dy[4] = {1,-1,0,0};
        memset(dis,0,sizeof(dis));
        queue<pair<int,int>>q;
        for(int i=0;i<m;i++){
            if(area[0][i]==1){
                q.push({0,i});
                dis[0][i]=1;
            }
        }
        while (!q.empty()) {
            pair<int,int> now;
            now = q.front();
            q.pop();
            if (s == 1) {
                for (int i = 0; i < 4; i++) {
                    if(now.first+dx[i]>=0 && now.first+dx[i] < n && now.second+dy[i] >=0 && now.second+dy[i] < m){
                        if(area[now.first+dx[i]][now.second+dy[i]]==1&&dis[now.first+dx[i]][now.second+dy[i]]==0){
                            q.push({now.first+dx[i],now.second+dy[i]});
                            dis[now.first+dx[i]][now.second+dy[i]] = dis[now.first][now.second] + 1;
                        }
                    }
                }
            } else if (s == 2) {
                for (int i = 0; i < 3; i++) {
                    if(now.first+dx[i]>=0 && now.first+dx[i] < n && now.second+dy[i] >=0 && now.second+dy[i] < m){
                        if(area[now.first+dx[i]][now.second+dy[i]]==1 && dis[now.first+dx[i]][now.second+dy[i]]==0){
                            q.push({now.first+dx[i],now.second+dy[i]});
                            dis[now.first+dx[i]][now.second+dy[i]] = dis[now.first][now.second] + 1;
                        }
                    }
                }
            }
        }
        cout << "Case " << cas << ":" << '\n';
        cas++;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout << dis[i][j] << ' ';
            }
            cout << '\n';
        }
    }
}