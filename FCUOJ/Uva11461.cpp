#include <iostream>
using namespace std;

int record[100001];
int main(){
    for(int i=1;i<=316;i++){
        record[i*i]++;
    }
    for(int i=1;i<=100000;i++){
        record[i] = record[i-1] + record[i];
    }
    int a,b;
    while(cin >> a >> b){
        if(a==0 && b==0){
            return 0;
        }
        cout << record[b] - record[a-1] << '\n';
    }
}