//working
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define fastio ios::sync_with_stdio(0);cin.tie(0);

int answer=0,back=0;
void getresult(string &a,int rate){
    for(int j=0;j<rate;j++){
        int ss = 0, ll = 0, nextrate;
        string next = "";
        for (int i = 0; i < a.size(); i++) {
            if (ss == ll && ss != 0) {
                getresult(next, nextrate);
                ss = 0;
                ll = 0;
                next = "";
            }
            if (ss > 0) {
                if (a[i] == 'L') { ss++; }
                if (a[i] == 'E') { ll++; }
                next += a[i];
                continue;
            }
            if (a[i] == 'L' && ss == 0) {
                ss++;
                nextrate = a[i + 1] - '0';
                continue;
            }
            if (a[i] == 'T') {
                int f = (a[i + 1] - '0') * 10 + (a[i + 2] - '0');
                answer += abs(f-back);
                back=f;
            }
        }
    }
}


int main() {
    fastio
    string ori;
    cin >> ori;
    getresult(ori,1);
    cout << answer-10;
}