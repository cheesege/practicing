#include <bits/stdc++.h>
using namespace std;
#define int long long
#define cheese ios::sync_with_stdio(0);cin.tie(0);

pair<int,char> con[16];
string Dec2Hex(string aa){
    string b;
    int a = stoll(aa);
    while (a>0){
        b = con[a%16].second+b;
        a/=16;
    }
    return "0x"+b;
}

int Hex2Dec(string a){
    int b = 0;
    for(int i=2;i<a.size();i++){
        int reci = a.size()-i-1;
        int rec;
        for(auto d:con){
            if(d.second==a[i]){
                rec = d.first;
            }
        }
        while (reci>0){
            rec*=16;
            reci--;
        }
        b+=rec;
    }
    return b;
}


signed main(){
    //cheese
    con[0] = {0,'0'};
    con[1] = {1,'1'};
    con[2] = {2,'2'};
    con[3] = {3,'3'};
    con[4] = {4,'4'};
    con[5] = {5,'5'};
    con[6] = {6,'6'};
    con[7] = {7,'7'};
    con[8] = {8,'8'};
    con[9] = {9,'9'};
    con[10] = {10,'A'};
    con[11] = {11,'B'};
    con[12] = {12,'C'};
    con[13] = {13,'D'};
    con[14] = {14,'E'};
    con[15] = {15,'F'};

    string a;
    while (cin >> a){
        if(a[0]=='-'){
            return 0;
        }
        if(a.size()>2 && a[1]=='x'){
            cout << Hex2Dec(a) << '\n';
        }
        else{
            cout << Dec2Hex(a)<<'\n';
        }
    }
}