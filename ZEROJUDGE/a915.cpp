#include<bits/stdc++.h>
using namespace std;

int main(){
    int r;
    cin >> r;
    pair<int,int> a[r];
    for(int i=0;i<r;i++){
        cin >> a[i].first >> a[i].second;
    }
    sort(a,a+r);
    for(int i=0;i<r;i++){
        cout << a[i].first <<' '<< a[i].second<< '\n';
    }
}