//by_answer
//working
//priority_queue
#include<bits/stdc++.h>
using namespace std;;
int main(){
    int n,m,p,tmp;
    int ans=0,ptr=0;//擊殺數 增援到第幾個兵
    cin >> n >> m >> p;
    priority_queue<int,vector<int>,greater<int>> pq; //小到大 priority_queue<int> 預設為大到小
    vector<int> c;//增援條件
    vector<pair<int,int>> k;//增援兵

    for(int i=0;i<n;i++){
        cin >> tmp;
        pq.push(tmp);
        //敵人隊列
    }
    for(int i=0;i<m;i++){
        cin >> tmp;
        c.push_back(tmp);
    }
    for(int i=0;i<m;i++){
        cin >> tmp;
        k.push_back(make_pair(c[i],tmp));
    }

    sort(k.begin(),k.end()); //排序增援兵出場順序

    while(p>pq.top() && pq.size()){//能力值大於敵人
        p = p + pq.top();
        ans++;
        pq.pop();

        while (ptr<m && ans==k[ptr].first){//增援兵<m 擊殺=增援條件
            pq.push(k[ptr].second);
            ptr++;
        }
    }

    cout << ans << endl;
}