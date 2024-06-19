//by_answer
//BFS
#include<bits/stdc++.h>
using namespace std;;

int main(){
    int num, n, m, sx, sy, tx, ty;
    while (cin >> num){//多筆測資
        for (int iter = 0; iter < num; iter++){//多筆測資的多筆測資
            cin >> n >> m >> sx >> sy >> tx >> ty; //列 行 起點 終點
            sx--;//將座標變成0開始
            sy--;
            tx--;
            ty--;
            int area[n][m];//地圖空間
            int dx[4] = {0,0,1,-1};
            int dy[4] = {1,-1,0,0};//每次需要更動的上下左右座標
            string str;
            for(int j=0;j<n;j++){
                cin >> str;
                for(int o=0;o<m;o++){
                    area[j][o] = str[o]-'0';//存入地圖並用ascii碼特性將字元轉數字
                }
            }
            int arr[n][m];//存取距離
            memset(arr,-1,sizeof(arr));//將arr全部設為-1 member set
            queue <pair<int,int>> q;//用以紀錄要探訪的座標 queue有先進先出特性
            q.push({sx,sy});//從初始座標開始走
            arr[sx][sy] = 1;//初始座標距離為1
            while (!q.empty()){//只要還有位置需要探訪就不會結束
                pair<int,int> now;//當下要操作的座標
                now = q.front();//拉出queue頂端
                q.pop();//取完值移除
                for(int i=0;i<4;i++){//四個處理座標
                    if(now.first+dx[i] >= 0 && now.first+dx[i] < n && now.second+dy[i] >= 0 && now.second+dy[i] < m){//檢查座標沒有超出地圖範圍
                        if(area[now.first+dx[i]][now.second+dy[i]] == 0 && arr[now.first+dx[i]][now.second+dy[i]] == -1){//檢查地圖可不可以走上下左右 檢查座標沒有被記錄過距離
                            q.push({now.first+dx[i], now.second+dy[i]});//把上下左右四個座標放進處理清單
                            arr[now.first+dx[i]][now.second+dy[i]] = arr[now.first][now.second] + 1;//上下左右等於中心+1
                        }
                    }
                }
            }
            if (arr[tx][ty] == -1) cout << 0 << "\n";//到不了
            else cout << arr[tx][ty] << "\n";//輸出最短距
        }
    }
}