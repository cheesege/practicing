//working
#include <bits/stdc++.h>
using namespace std;

map<int, vector<pair<int,pair<int,int>>>> mp;// start target distance speed
priority_queue<pair<int,int>,vector<pair<int,int>>,greater<>> tim;
priority_queue<int,vector<int>,greater<>> rd;
int B,alld=0;
void t_dfs(int begin,int last,pair<int,int> tandd){//現在 上次 累積權重
    for(pair<int,pair<int,int>> p : mp[begin]){
        cout << begin << ' ' << p.first << ' ' << p.second.first << ' ' << p.second.second << ' ' << tandd.first+p.second.second <<' '<< tandd.second+p.second.first << '\n';
        if(p.first == last){//如果你下一條路等於你的上個節點 即走原路
            continue;
        }
        else if(p.first == B){
            tim.push({tandd.first+p.second.second,tandd.second+p.second.first});
            cout << tandd.first+p.second.second <<' '<< tandd.second+p.second.first << '\n';
        }
        else{
            if(!tim.empty() && tandd.first+p.second.second < tim.top().first){
                t_dfs(p.first,begin, make_pair(tandd.first+p.second.second,tandd.second+p.second.first));
            }
            else if(tandd.second+p.second.first > alld){
                continue;
            }
            else if(tim.empty()){
                t_dfs(p.first,begin,make_pair(tandd.first+p.second.second,tandd.second+p.second.first));
            }
            else{
                continue;
            }
        }
    }
}
void p_dfs(int begin,int last,int total){//現在 上次 累積權重
    for(pair<int,pair<int,int>> p : mp[begin]){
        //cout << begin << ' ' << p.first << ' ' << p.second.first << ' ' << p.second.second << ' ' << total << '\n';
        if(p.first == last){//如果你下一條路等於你的上個節點 即走原路
            continue;
        }
        else if(p.first == B){
            rd.push(total+p.second.first);
            //cout << total+p.second.first << '\n';
        }
        else{
            if(!rd.empty() && total+p.second.first < rd.top()){
                p_dfs(p.first,begin,total+p.second.first);
            }
            else if(total+p.second.first > alld){
                continue;
            }
            else if(rd.empty()){
                p_dfs(p.first,begin,total+p.second.first);
            }
            else{
                continue;
            }
        }
    }
}


int main(){
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        int n,m;
        cin >> n >> m;
        int A;
        cin >> A >> B;
        for(int j=0;j<m;j++){
            int a,b,d,v;
            cin >> a >> b >> d >> v;
            mp[a].push_back(make_pair(b, make_pair(d,v)));
            mp[b].push_back(make_pair(a, make_pair(d,v)));
            alld+= d;
        }
        p_dfs(A,-1,0);
        t_dfs(A,-1,{0,0});
        cout << rd.top() << ' ' << tim.top().second << '\n';
    }
}