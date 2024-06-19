//by_answer
//Dango是團子 想吃
//左團子右團子
#include<bits/stdc++.h>
using namespace std;;

int main(){
    int n;
    string s;
    cin >> n;
    cin >> s;
    int max=0;
    int now=0;
    for(int i=0;i<n;i++){
        if(s[i] == 'o'){
            now++;
        }
        if(i>0 && s[i] == '-' && s[i-1] == 'o'){
            if(now > max){
                max = now;
            }
            now = 0;
        }
    }
    now = 0;
    reverse(s.begin(),s.end());
    for(int i=0;i<n;i++){
        if(s[i] == 'o'){
            now++;
        }
        if(i>0 && s[i] == '-' && s[i-1] == 'o'){
            if(now > max){
                max = now;
            }
            now = 0;
        }
    }
    if(max==0){
        max = -1;
    }
    cout << max;
}