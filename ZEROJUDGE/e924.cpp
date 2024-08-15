#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string a;
        cin >> a;
        stack<char> match;
        for(int i=0;i<a.length();i++){
            if(!match.empty()){
                if((a[i] == ')' && match.top() == '(') || (a[i] == ']' && match.top() == '[') || (a[i] == '>' && match.top() == '<') || (a[i] == '}' && match.top() == '{')){
                    match.pop();
                }
                else{
                    match.push(a[i]);
                }
            }
            else{
                match.push(a[i]);
            }
        }
        if(match.empty()){
            cout << "Y" << '\n';
        }
        else{
            cout << "N" << '\n';
        }
    }
}