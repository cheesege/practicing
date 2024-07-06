//working
//presentation error
#include <iostream>
using namespace std;
#define ll long long
int main(){
    ll a;
    int n = 0;
    while(cin >> a){
        n++;
        int save[11];
        int state = 0;
        while(a > 0){
            if(state%4==1){
                save[state] = a%10;
                a/=10;
            }
            else{
                save[state] = a%100;
                a/=100;
            }
            state++;
        }
        int op = n;
        while(op<1000){
            cout << ' ';
            op*=10;
        }
        cout << n << ". ";
        for(int i = state-1;i>=0;i--){
            if(i%4==0 && i!=0){
                if(save[i]!=0){
                    cout << save[i] << " kuti ";
                }
                else{
                    cout << "kuti ";
                }
            }
            if(i%4==3 && save[i]!=0){
                cout << save[i] << " lakh ";
            }
            if(i%4==2 && save[i]!=0){
                cout << save[i] << " hajar ";
            }
            if(i%4==1 && save[i]!=0){
                cout << save[i] << " shata ";
            }
            if(i==0 && save[i]!=0){
                cout << save[i];
            }
        }
        if(state == 0){
            cout << '0';
        }
        cout << '\n';
    }
}