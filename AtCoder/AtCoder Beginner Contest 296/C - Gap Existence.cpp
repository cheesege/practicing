//by_answer
#include<bits/stdc++.h>
using namespace std;;

int main(){
    int n,x;
    cin >> n >> x;

    set<int> s;
    for(int i=0;i<n;i++){
        int t;
        cin >> t;
        s.insert(t);
    }

    for(auto a:s){
        if(s.count(a+x)){
            cout << "Yes";
            return 0;
        }
    }
    cout << "No";
}