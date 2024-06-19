#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int n,m,N,Q;
    cin >> n >> m >> N >> Q;
    int high[n][m];
    vector<pair<pair<int,int>,int>> shake;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int a;
            cin >> a;
            high[i][j] = a;
        }
    }
    for(int i=0;i<N;i++){
        int a,b,c;
        cin >> a >> b >> c;
        shake.push_back({{a,b},c});
    }
    int center = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(high[i][j] == 0){
                for(int spca = 1;spca<=50;spca++){
                    bool cross = false;
                    for(auto pos:shake){
                        cout << pos.second << '\n';
                        cout << abs(pos.first.first - i)+abs(pos.first.second - j) << '\n';
                        if(pos.second == spca+high[pos.first.first][pos.first.second]-abs(pos.first.first - i)-abs(pos.first.second - j)){
                            cout << "pass"<<'\n';
                        }
                        else{
                            cross = true;
                            break;
                        }
                    }
                    if(!cross) {
                        center = spca;
                    }
                }
            }
        }
    }
    cout << center;
    for(int i=0;i<N;i++){
        int a,b;

    }
}