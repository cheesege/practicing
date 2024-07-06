#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool cmp(const pair<string,int> &a,const pair<string,int> &b){
    if(a.second == b.second){
        return a.first < b.first;
    }
    return a.second > b.second;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<pair<string,int>> rssi;
        for(int i=0;i<n;i++){
            string a;
            int b,c;
            cin >> a >> b >> c;
            if(c > 1000){
                continue;
            }
            rssi.emplace_back(a,b);
        }
        sort(rssi.begin(),rssi.end(),cmp);
        for(int i=0;i< min(int(rssi.size()),3);i++){
            cout << rssi[i].first << ' ' << rssi[i].second << '\n';
        }
    }
}