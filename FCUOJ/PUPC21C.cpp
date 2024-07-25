#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int k;
    cin >> k;
    map<string,string> RFID;
    while(k--){
        string a;
        cin >> a;
        string b,c;
        for(int i=0;i<a.length();i++){
            if(a[i]==','){
                break;
            }
            b+=a[i];
        }
        for(int i=a.length()-8;i<a.length();i++){
            c+=a[i];
        }
        RFID.insert({c,b});
    }
    int t;
    cin >> t;
    char hex[] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
    while(t--){
        ll test;
        cin >> test;
        string ans;
        while(test!=0){
            ans = hex[test%16] + ans;
            test/=16;
        }
        if(ans.length()==7){
            ans = '0' + ans;
        }
        string tans = {ans[6],ans[7],ans[4],ans[5],ans[2],ans[3],ans[0],ans[1]};
        if(RFID.count(tans)){
            cout << RFID[tans] << '\n';
        }
        else{
            cout << 'X' << '\n';
        }
    }
}