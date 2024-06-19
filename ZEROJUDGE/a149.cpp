#include<bits/stdc++.h>
using namespace std;
int main(){
    int times,sum;
    cin >> times;
    for(int i=0;i<times;i++){
        sum=0;
        string a;
        cin >> a;
        sum = a[0]-'0';
        for(int j=1;j<a.size();j++){
            sum=sum*(a[j]-'0');
        }
        cout << sum<< '\n';
    }
}