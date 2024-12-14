//working
#include <bits/stdc++.h>
using namespace std;;


int main() {
    long long x;
    int f=0;
    cin >> x;
    if(x==0){
        cout << "basic";
        cout << "NO";
        f=1;
    }
    else if(x>0){
        for(int i=0;i<10000000&&i<=x;i++){
            if(i>50000){
                cout << "min/over over" << '\n';
                cout << "i=" << i << '\n';
                cout << (5*i-4) << '\n';
                cout << "x/i="<<((x/i)/(i+1))<<'\n';
                if((((5*i-4))==((x/i)/(i+1)))&&(x%(i*(i+1))==0)){
                    cout << "YES";
                    f=1;
                    break;//170993535648 341995133612 999997532627957732
                }
            }
            else if(i>700){
                cout << "min/over" << '\n';
                cout << "i=" << i << '\n';
                cout << (i+1)*(5*i-4) << '\n';
                cout << "x/i="<<x/i<<'\n';
                if((((i+1)*(5*i-4))==(x/i))&&((x%i)==0)){
                    cout << "YES";
                    f=1;
                    break;
                }
            }
            else{
                cout << "min/less" << '\n';
                cout << "i=" << i << '\n';
                cout << (i+1)*(5*i-4) << '\n';
                if((i*(i+1)*(5*i-4))==x){
                    cout << "YES";
                    f=1;
                    break;
                }
            }
        }
    }
    else if (x<0){
        for(int i=0;i>-10000000&&i>=x;i--){
            if(i<-50000){
                cout << "max/over over" << '\n';
                cout << "i=" << i << '\n';
                cout << (5*i-4) << '\n';
                cout << "x/i="<<((x/i)/(i+1))<<'\n';
                if((((5*i-4))==((x/i)/(i+1)))&&(x%(i*(i+1))==0)){
                    cout << "YES";
                    f=1;
                    break;
                }
            }
            else if(i<-700){
                cout << "max/over" << '\n';
                cout << "i=" << i << '\n';
                cout << (i+1)*(5*i-4) << '\n';
                cout << "x/i="<<x/i<<'\n';
                if((((i+1)*(5*i-4))==(x/i))&&((x%i)==0)){
                    cout << "YES";
                    f=1;
                    break;
                }
            }
            else{
                cout << "max/less" << '\n';
                cout << "i=" << i << '\n';
                cout << (i+1)*(5*i-4) << '\n';
                if((i*(i+1)*(5*i-4))==x){
                    cout << "YES";
                    f=1;
                    break;
                }
            }
        }
    }
    if(f==0){
        cout << "NO";
    }



    system("pause");
}
