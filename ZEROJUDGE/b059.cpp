//working
#include<bits/stdc++.h>
using namespace std;;

int main(){
    int num;
    while(cin >> num){
        int area[99][99];
        int dis[99][99];
        int sx,sy,tx,ty;
        memset(area,0,sizeof(area));
        for(int i=0;i<num;i++){
            int a, b;
            cin >> a >> b;
            area[a][b] = 1;
        }
        int dx[8] = {1,-1,-3,-3,-1,1,3,3};
        int dy[8] = {-3,-3,-1,1,3,3,1,-1};
        memset(dis,-1,sizeof(dis));
        cin >> sx >> sy >> tx >> ty;
        queue<pair<int,int>> q;
        q.push({sx,sy});
        dis[sx][sy] = 1;
        while(!q.empty()){
            pair<int,int> now;
            now = q.front();
            q.pop();
            for(int i=0;i<8;i++){
                if(now.first+dx[i]>=0 && now.first+dx[i]<=99 && now.second+dy[i]>=0 && now.second+dy[i] <=99){
                    if(area[now.first+dx[i]][now.second+dy[i]]==0 && dis[now.first+dx[i]][now.second+dy[i]] == -1){
                        if(i==0 || i==1){
                            if(area[now.first][now.second-1]==0){
                                q.push({now.first+dx[i], now.second+dy[i]});
                                dis[now.first+dx[i]][now.second+dy[i]] = dis[now.first][now.second] + 1;
                            }
                        }
                        else if (i==2 || i==3){
                            if(area[now.first-1][now.second]==0){
                                q.push({now.first+dx[i], now.second+dy[i]});
                                dis[now.first+dx[i]][now.second+dy[i]] = dis[now.first][now.second] + 1;
                            }
                        }
                        else if (i==4 || i==5){
                            if(area[now.first][now.second+1]==0){
                                q.push({now.first+dx[i], now.second+dy[i]});
                                dis[now.first+dx[i]][now.second+dy[i]] = dis[now.first][now.second] + 1;
                            }
                        }
                        else if (i==6 || i==7){
                            if(area[now.first+1][now.second]==0){
                                q.push({now.first+dx[i], now.second+dy[i]});
                                dis[now.first+dx[i]][now.second+dy[i]] = dis[now.first][now.second] + 1;
                            }
                        }
                    }
                }
            }
        }
        if (dis[tx][ty] == -1) cout << "impossible" << "\n";//到不了
        else cout << dis[tx][ty]-1 << "\n";//輸出最短距
    }
}