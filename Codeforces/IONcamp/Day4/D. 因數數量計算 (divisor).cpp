//we
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<int> factors;
int main(){
    ios::sync_with_stdio(0);
    //cin.tie(0);

    int tim;
    cin >> tim;
    for(int j=0;j<tim;j++){
        int n;
        cin >> n;
        factors.clear();

        int coun =1;
        int i=2;
        while(i*i<=n){
            int power=0;
            while(n % i == 0){
                power++;
                n = int(n/i);
            }
            coun *= (power+1);
            if(i==2){
                i++;
            }
            else{
                i+=2;
            }
        }
        if(n>1){
            coun*=2;
        }


        cout << coun << '\n';
    }

}