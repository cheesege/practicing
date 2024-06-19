#include<bits/stdc++.h>
using namespace std;;

int main(){
    int n,t;
    int now=0,s;
    cin >> n >> t;
    int C[n];
    int R[n];
    for(int i=0;i<n;i++){
        int a;
        cin >> a;
        C[i] = a;
    }
    for(int i=0;i<n;i++){
        int a;
        cin >> a;
        R[i] = a;
    }
    for(int i=0;i<n;i++){
        if(C[i] == t){
            now++;
        }
    }
    if(now){
        vector<pair<int,int>> sr;
        for(int i=0;i<n;i++){
            sr.push_back(make_pair(C[i],R[i]));
        }
        sort(sr.begin(),sr.end());
        for(int i=0;i<n;i++){
            if(sr[i].first == t){
                s = sr[i].second;
            }
        }
        for(int i=0;i<n;i++){
            if(R[i] == s){
                cout << i+1 ;
            }
        }
    }
    if(!now){
        vector<pair<int,int>> sr;
        for(int i=0;i<n;i++){
            sr.push_back(make_pair(C[i],R[i]));
        }
        t = sr[0].first;
        sort(sr.begin(),sr.end());
        for(int i=0;i<n;i++){
            if(sr[i].first == t){
                s = sr[i].second;
            }
        }
        for(int i=0;i<n;i++){
            if(R[i] == s){
                cout << i+1 ;
            }
        }
    }
}