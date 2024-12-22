#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i=0;i<t;i++) {
        queue<int> wa;
        int a, b,c=0;
        cin >> a >> b;
        wa.push(a);
        if (b > a) {
            cout << "No" << '\n';
        } else if (a == b) {
            cout << "Yes" << '\n';
        } else {
            while(!wa.empty()&&wa.front()>b) {
                int x = wa.front();
                wa.pop();
                while (x % 3 == 0 && x >= 3 && x >= b) {
                    if (b == x / 3 || b == (x / 3) * 2) {
                        cout << "Yes" << '\n';
                        c = 1;
                        break;
                    } else {
                        x /= 3;
                        wa.push(x);
                        x *= 2;
                        wa.push(x);
                    }
                }
                if(c)break;
            }
            if(c!=1){cout << "No" << '\n';}
        }
    }
}