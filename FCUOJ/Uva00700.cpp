#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t,cas=0;
    while(cin >> t){
        if(t==0){
            return 0;
        }
        vector<set<int>> pc(t);
        while(t--){
            int a,b,c;
            cin >> a >> b >> c;
            int n=a+1;
            for(int i=a+1;i<=10000;i++,n++){
                if(n==c){
                    n = b;
                }
                if(n==a){
                    pc[t].insert(i);
                }
            }
        }
        int ans=-1,ansed=0;
        for(auto a:pc[0]){
            for(auto b:pc){
                ansed=0;
                for(auto c:b){
                    if(a==c){
                        ans = c;
                        ansed=1;
                        break;
                    }
                }
                if(ans==-1||ansed==0){
                    ans=-1;
                    break;
                }
            }
            if(ans!=-1){
                break;
            }
        }
        cout <<"Case #" << ++cas<<':'<<'\n';
        if(ans!=-1){
            cout << "The actual year is "<<ans<<'.'<<'\n';
        }
        else{
            cout << "Unknown bugs detected."<<'\n';
        }
        cout << '\n';
    }
}