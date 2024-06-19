#include <iostream>
#include <stack>
using namespace std;


int main(){
    int q;
    cin >> q;
    while(q--){
        string a;
        cin >> a;
        int s_left = 0,s_right = 0;
        int m_left = 0,m_right = 0;
        for(int i=0;i<=a.length();i++){
            if(i == a.length()){
                cout << "Yes" << '\n';
                break;
            }
            if(a[i] == '('){
                s_left++;
            }
            else if(a[i] == ')'){
                s_right++;
            }
            else if(a[i] == '{'){
                m_left++;
            }
            else if(a[i] == '}'){
                m_right++;
            }

            if(s_right > s_left || m_right > m_left){
                cout << "No" << '\n';
                break;
            }
        }
        /*
        stack<char> rec;
        for(int i=0;i<a.length();i++){
            if(rec.empty()){
                rec.push(a[i]);
            }
            else{
                if((rec.top() == '(' && a[i] == ')') || (rec.top() == '[' && a[i] == ']')){
                    rec.pop();
                }
                else{
                    rec.push(a[i]);
                }
            }
        }
        if(rec.empty()){
            cout << "Yes" << '\n';
        }
        else{
            cout << "No" << '\n';
        }
        */
    }
}