#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastio ios::sync_with_stdio(0);cin.tie(0);

int main() {
    fastio
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int ans=0;
        vector<pair<int, int>> score;
        for(int k=1;k<=10;k++) {
            string a;
            cin >> a;
            for (int j = 1; j <= 10; j++) {
                if (a[j - 1] == 'X') {
                    score.push_back(make_pair(j, k));
                }
            }
        }
        for(pair<int,int> f : score){
            if(f.first==1 || f.first==10 || f.second==1 || f.second==10){
                ans+=1;
                continue;
            }
            if(f.first==2 || f.first==9 || f.second==2 || f.second==9){
                ans+=2;
                continue;
            }
            if(f.first==3 || f.first==8 || f.second==3 || f.second==8){
                ans+=3;
                continue;
            }
            if(f.first==4 || f.first==7 || f.second==4 || f.second==7){
                ans+=4;
                continue;
            }
            if(f.first==5 || f.first==6 || f.second==5 || f.second==6){
                ans+=5;
                continue;
            }
        }
        cout << ans << '\n';
    }
}