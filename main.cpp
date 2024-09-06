#include <bits/stdc++.h>
using namespace std;
#define int long long
#define cheese ios::sync_with_stdio(0);cin.tie(0);

signed main(){
    //cheese
    int t;
    cin >> t;
    for(int i=1;i<=t;i++){
        cout << "TEST " << i << ":'\n";
        string a;
        cin >> a;
        int n;
        cin >> n;
        map<char,pair<int,int>> rect;
        map<char,pair<int,int>> V_path;
        map<char,pair<int,int>> H_path;
        vector<int> hw(10005,0);
        vector<int> vw(10005,0);
        for(int j=0;j<n;j++){
            char b;
            int x,y;
            cin >> b >> x >> y;
            rect.insert(make_pair(b, make_pair(x,y)));
        }
        cin >> a;
        int h,v,w;
        char b;
        for(int j=0;j<n;j++){
            cin >> v >> b >> w;
            V_path.insert({b,{v,w}});
        }
        cin >> a;
        for(int j=0;j<n;j++){
            cin >> h >> b >> w;
            H_path.insert({b,{h,w}});
        }
        int pos=65;
        for(auto f:rect){
            vw[V_path[f.first].second] = vw[V_path[f.first].first]+f.second.first;
            hw[H_path[f.first].second] = hw[H_path[f.first].first]+f.second.second;
        }
    }
}