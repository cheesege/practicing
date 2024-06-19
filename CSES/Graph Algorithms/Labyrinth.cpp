#include <bits/stdc++.h>
using namespace std;
#define cheese ios::sync_with_stdio(0);cin.tie(0);
int area[1005][1005];

signed main(){
    cheese
    int n,m;
    cin >> n >> m;
    pair<int,int> start;
    pair<int,int> target;
    for(int i=0;i<n;i++){
        string a;
        cin >> a;
        for(int j=0;j<m;j++){
            if(a[j]=='#'){
                area[i][j] = 0;
                continue;
            }
            if(a[j]=='.'){
                area[i][j] = 1;
                continue;
            }
            if(a[j]=='A'){
                area[i][j] = 1;
                start = {i,j};
                continue;
            }
            if(a[j]=='B'){
                area[i][j] = 1;
                target = {i,j};
                continue;
            }
        }
    }
    queue<pair<pair<int,int>,string>> q;
    q.push({start,""});
    int dx[4] = {0,1,0,-1};
    int dy[4] = {1,0,-1,0};
    char dn[4] = {'R','D','L','U'};
    while(!q.empty()){
        pair<pair<int,int>,string> now = q.front();
        q.pop();
        cout << now.first.first << ' ' << now.first.second << ' ' << now.second << '\n';
        if(now.first.first == target.first && now.first.second == target.second){
            cout << "YES" << '\n';
            cout << now.second.size() << '\n';
            for(int i=0;i<now.second.size();i++){
                cout << now.second[i];
            }
        return 0;
        }
        for(int i=0;i<4;i++){
            if(now.first.first + dx[i]>=0 && now.first.first + dx[i]<n && now.first.second + dy[i]>=0 && now.first.second + dx[i]<m){
                if(area[now.first.first + dx[i]][now.first.second + dy[i]]){
                    area[now.first.first + dx[i]][now.first.second + dy[i]]--;
                    q.push({{now.first.first + dx[i],now.first.second + dy[i]},now.second+dn[i]});
                }
            }
        }
    }
    cout << "NO";
}



