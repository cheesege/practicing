//幹你娘一直記憶體區段錯誤
#include<bits/stdc++.h>
using namespace std;;

int main(){
    int num;
    cin >> num;
    for(int i=0;i<num;i++){
        stack<char> brackets;
        int t=0;
        string x;
        cin >> x;
        for(auto a:x){
            if(a=='('){
                brackets.push(a);
            }
            else if(a==')'){
                if(!brackets.empty()&&brackets.top()=='('){
                    t++;
                    brackets.pop();
                }
                else{
                    brackets.push(a);
                }
            }
        }
        if(brackets.empty()){
            cout << t << '\n';
        }
        else{
            cout << '0' << '\n';
        }
    }

}