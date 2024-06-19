#include <bits/stdc++.h>
using namespace std;;
#define fastio ios_base::sync_with_stdio(0), cin.tie(0);
#define int long long

signed main(){
    int n,m,rec;
    vector<int> orange;
    cin >> n >> m;
    for(int i=0;i<n;i++){
        int a;
        cin>> a;
        orange.push_back(a);
    }
    sort(orange.begin(),orange.end());
    for(int i=0;i<m;i++){
        char a;
        int b;
        cin >> a >> b;
        switch (a) {
            case '>':
                rec = upper_bound(orange.begin(),orange.end(),b)-orange.begin();
                if(rec == orange.size()){
                    cout << "QQ" << '\n';
                }
                else{
                    cout << orange[rec] << '\n';
                }
                break;
            case '<':
                rec = lower_bound(orange.begin(),orange.end(),b)-orange.begin();
                if(rec == 0){
                    cout << "QQ" << '\n';
                }
                else{
                    cout << orange[rec-1] << '\n';
                }
                break;
            case '+':
                rec = lower_bound(orange.begin(),orange.end(),b)-orange.begin();
                orange.insert(orange.begin()+rec,b);
                break;
            case '-':
                rec = lower_bound(orange.begin(),orange.end(),b)-orange.begin();
                orange.erase(orange.begin()+rec);
                break;
        }
    }
}