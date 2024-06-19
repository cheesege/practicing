//by_answer
//bfs
//binary_search
#include<bits/stdc++.h>
using namespace std;
int n,area[300][300],mx=INT_MIN,data[300][300];
int bfs(int res){
    memset(data,0,sizeof data);
    queue<pair<int,int>>step;
    step.push({0, 0});
    data[0][0]=1;
    int ans=1;
    while(!step.empty()){
        int t=step.size();
        for(int i=0;i<t;i++){
            int r=step.front().first,c=step.front().second;
            step.pop();
            if(r!=0&&!data[r-1][c]&& abs(area[r][c] - area[r - 1][c]) <= res){
                data[r-1][c]=1;
                step.push({r - 1, c});
                if(r-1==n-1&&c==n-1)return ans;
            }
            if(r!=n-1&&!data[r+1][c]&& abs(area[r][c] - area[r + 1][c]) <= res){
                data[r+1][c]=1;
                step.push({r + 1, c});
                if(r+1==n-1&&c==n-1)return ans;
            }
            if(c!=0&&!data[r][c-1]&& abs(area[r][c] - area[r][c - 1]) <= res){
                data[r][c-1]=1;
                step.push({r, c - 1});
                if(r==n-1&&c-1==n-1)return ans;
            }
            if(c!=n-1&&!data[r][c+1]&& abs(area[r][c] - area[r][c + 1]) <= res){
                data[r][c+1]=1;
                step.push({r, c + 1});
                if(r==n-1&&c+1==n-1)return ans;
            }
        }
        ans++;
    }
    return -1;
}
pair<int,int>binary_search(int l, int r){
    if(l==r){
        return {l,bfs(l)};
    }
    else if(r==l+1) {
        int t = bfs(l);
        if (t != -1) {
            return {l, t};
        } else {
            return {r, bfs(r)};
        }
        int m = (l + r) / 2, t = bfs(m);
        if (t == -1)return binary_search(m + 1, r);
        else return binary_search(l, m);
    }
}
int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> area[i][j];
            mx=max(mx, area[i][j]);
        }
    }
    auto tmp= binary_search(0, mx);
    cout<<tmp.first<<"\n"<<tmp.second;
}