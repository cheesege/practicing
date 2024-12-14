//prefix_sum
#include<bits/stdc++.h>
using namespace std;;
int main(){
    int n,q;
    cin >> n >> q;
    vector<string> gene;
    for(int i=0;i<n;i++){
        string a;
        cin >> a;
        gene.push_back(a);
    }
    for(int i=0;i<q;i++){
        int s;
        cin >> s;
        if(s==1){
            int len=0;
            int l ,r, k;
            char c;
            cin >> l >> r >> c >> k;
            for(int j=l-1;j<r;j++){
                for(int o=0;o<gene[j].size();o++){
                    if(gene[j][o]== c){
                        len++;
                    }
                }
            }
            if(len>=k){
                cout << "Yes" << '\n';
            }
            else{
                cout << "No" << '\n';
            }
        }
        if(s==2){
            int p;
            string t;
            cin >> p >> t;
            gene[p-1] = t;
        }
    }
}