#include<bits/stdc++.h>
using namespace std;;

int main(){
    int n;
    while(cin >> n){
        if(n==0){break;}
        int a;
        while(cin >> a){
            int pass=0;
            vector<int> cord;
            stack<int> Bsite;
            stack<int> Station;
            stack<int> Asite;
            if(a==0){break;}
            cord.push_back(a);
            for(int p=0;p<n-1;p++){
                cin >> a;
                cord.push_back(a);
            }
            reverse(cord.begin(),cord.end());
            for(int p=0;p<n;p++){
                Bsite.push(cord[p]);
            }
            for(int i=n;i>0;i--){
                Asite.push(i);
            }
            while (pass==0) {
                if (Asite.size()!=0&&Bsite.top() == Asite.top()) {
                    Asite.pop();
                    Bsite.pop();
                }
                else if (Station.size() != 0) {
                    if(Bsite.top() == Station.top()) {
                        Station.pop();
                        Bsite.pop();
                    }
                    else{
                        Station.push(Asite.top());
                        Asite.pop();
                    }
                }
                else {
                    Station.push(Asite.top());
                    Asite.pop();
                }
                if(Bsite.size()!=0&&Asite.size()==0&&Station.top()!=Bsite.top()){
                    pass=1;
                    break;
                }
                if(Bsite.size()==0){
                    break;
                }
            }
            if(pass==0){
                cout << "Yes" << '\n';
            }
            if(pass==1){
                cout << "No" << '\n';
            }
        }
        cout << '\n';
    }
}