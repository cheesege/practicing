#include <iostream>
#include <algorithm>
using namespace std;

int record[10005];
int main(){
    int a,t=0;
    while(cin >> a){
        t++;
        record[t] = a;
        sort(record,record+t+1);
        if(t%2==1){
            cout << record[t/2+1] << '\n';
        }
        else{
            cout << (record[t/2] + record[t/2+1])/2 << '\n';
        }
    }
}