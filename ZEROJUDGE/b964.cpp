#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    int lucky = 101,unluc = -1;
    int save[n];
    for(int i=0;i<n;i++){
        int a;
        cin >> a;
        save[i] = a;
        if(a>=60){
            lucky = min(lucky,a);
        }
        else if(a<60){
            unluc = max(unluc,a);
        }
    }
    sort(save,save+n);
    for(int i=0;i<n;i++){
        cout << save[i] << ' ';
    }
    cout << '\n';
    if(unluc != -1){
        cout << unluc << '\n';
    }
    else{
        cout << "best case" << '\n';
    }
    if(lucky != 101){
        cout << lucky << '\n';
    }
    else{
        cout << "worst case" << '\n';
    }
}