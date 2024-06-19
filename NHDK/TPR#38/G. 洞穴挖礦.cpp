#include <bits/stdc++.h>
using namespace std;
#define cheese ios::sync_with_stdio(0);cin.tie(0);
#define int long long
signed main(){
    cheese
    int n;
    cin >> n;
    map<int,vector<int>> road;
    vector<int> gem;
    gem.push_back(0);
    for(int i=0;i<n;i++){
        int a;
        cin >> a;
        gem.push_back(a);
    }
    for(int i=0;i<n-1;i++){
        int a,b;
        cin >> a >> b;
        road[a].push_back(b);
    }
    int q;
    cin >> q;
    for(int i=0;i<q;i++){
        int v,k;
        cin >> v >> k;
        int l=0,r=1e11,mid,ans = -1;
        while(l<r){
            mid = (l+r)/2;
            int m = mid;
            int get =0;
            queue<int> step;
            step.push(v);
            get += gem[v];
            int c = 0;
            while(!step.empty()){
                int main = step.front();
                if(c==0){
                    c = road[main].size();
                }
                c--;
                if(m<=0){
                    break;
                }
                for(auto a:road[main]){
                    step.push(a);
                    get += gem[a];
                }
                if(c==0){
                    m--;
                }
                step.pop();
            }
            if(get>=k){
                r = mid;
                ans = r;
            }
            else{
                l = mid+1;
            }
        }
        cout << ans << '\n';
    }
}



