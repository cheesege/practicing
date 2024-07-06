#include <iostream>
using namespace std;
#define ll long long
int main(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int a;
        cin >> a;
        int now = 1;
        for(int j=1;j<=12;j++){
            now = now*j;
            if(now%a==0){
                cout << j << '\n';
                break;
            }
        }
    }
}