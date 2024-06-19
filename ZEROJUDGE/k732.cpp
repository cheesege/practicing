#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    int area[n][m];
    vector<pair<int,int>> pos;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int a;
            cin >> a;
            area[i][j] = a;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int sum=0;
            for(int a=0;a<n;a++){
                for(int b=0;b<m;b++){
                    if(abs(i-a)+abs(j-b) <= area[i][j]){
                        sum = sum + area[a][b];
                    }
                }
            }
            if(sum%10 == area[i][j]){
                pos.push_back(make_pair(i,j));
            }
        }
    }
    sort(pos.begin(),pos.end());
    int size = pos.size();
    cout << size <<'\n';
    for(int i=0;i<size;i++){
        cout << pos[i].first << ' ' << pos[i].second << '\n';
    }
}