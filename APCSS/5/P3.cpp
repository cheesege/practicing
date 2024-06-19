#include <bits/stdc++.h>
using namespace std;
#define int long long

bool cmp1(pair<int,int> a,pair<int,int> b){
    return a.first < b.first;
}
bool cmp2(pair<int,int> a,pair<int,int> b){
    return a.second < b.second;
}

signed main(){
    int n,k,t;
    cin >> n >> k >> t;
    vector<pair<int,int>> minus;
    int last = 0;
    for(int i=0;i<n;i++){
        int a;
        cin >> a;
        minus.push_back({a-last,last});
        last = a;
    }
    minus.push_back({t-last,last});
    for(int i=0;i<k;i++){
        sort(minus.begin(),minus.end(),cmp1);
        if(minus[0].second == 0){

        }
    }
}