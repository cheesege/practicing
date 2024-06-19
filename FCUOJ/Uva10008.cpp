#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    cin >> n;
    cin.ignore();
    int count[123] = {0},large = 0;
    for(int i=0;i<n;i++){
        string a;
        getline(cin,a);
        for(int j=0;j<a.size();j++){
            if(a[j]>='A' && a[j]<='Z' || a[j]>='a' && a[j]<='z'){
                count[toupper(a[j])]++;
                large = max(count[toupper(a[j])],large);
            }
        }
    }
    while(large){
        for(char i = 'A';i<='Z';i++){
            if(count[i]==large){
                cout << i << ' ' << count[i] << '\n';
            }
        }
        large--;
    }
}