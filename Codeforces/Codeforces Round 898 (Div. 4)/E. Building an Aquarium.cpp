#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastio ios::sync_with_stdio(0);cin.tie(0);

int main() {
    fastio
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n,x;
        cin >> n >> x;
        vector<int> build;
        int large=0;
        for(int j=0;j<n;j++){
            int a;
            cin >> a;
            build.push_back(a);
            if(a>large){large=a;}
        }
        sort(build.begin(),build.end());
        int last=0;
        int now = 0;
        int lastj;
        int tried=0;
        int j;
        for(j=0;j<int(1e9);j++){
            for(int k=0;k<n;k++){
                now = now + (j>build[k]);
                if(j<=build[k]){
                    break;
                }
            }
            if(now > x){
                tried++;
                cout << lastj << '\n';
                break;
            }
            lastj = j;
            last = now;
        }
        if(!tried){
            cout << j+1 << '\n';
        }
    }
}