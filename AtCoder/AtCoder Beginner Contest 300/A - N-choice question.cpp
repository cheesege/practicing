#include <iostream>
using namespace std;
typedef long long ll;


int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int n,a,b;
    cin >> n >> a >> b;
    for(int i=1;i<=n;i++){
        int l;
        cin >> l;
        if(l==a+b){
            cout << i;
            break;
        }
    }
}