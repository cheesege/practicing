//我被這題卡QQ
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    string a;
    while(cin >> a){
        if(a == "0:00"){
            return 0;
        }
        double h,m;
        if(a.length()==4){
            h = (a[0]-'0');
            m = (a[2]-'0')*10 + a[3]-'0';
        }
        else{
            h = (a[0]-'0')*10 + a[1]-'0';
            m = (a[3]-'0')*10 + a[4]-'0';
        }
        double ans=0;
        ans = abs(30*h - 5.5*m);
        if(ans > 180){
            ans = 360 - ans;
        }
        cout << fixed << setprecision(3) << ans << '\n';
    }
}