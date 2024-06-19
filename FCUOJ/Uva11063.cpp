//working
#include <iostream>
#include <set>
using namespace std;

int main(){
    int a,cas = 0,pass;
    while(cin >> a){
        pass = 1;
        cas++;
        set<int> b2;
        int rec[a];
        for(int i=0;i<a;i++){
            int b;
            cin >> b;
            rec[i] = b;
        }
        for(int i=0;i<a;i++){
            for(int j=i;j<a;j++){
                if(b2.count(rec[i]+rec[j])){
                    pass = 0;
                    break;
                }
                b2.insert(rec[i]+rec[j]);
            }
            if(!pass){
                break;
            }
        }
        if(pass){
            cout << "Case #" << cas << ": It is a B2-Sequence." << '\n' << '\n';
        }
        else{
            cout << "Case #" << cas << ": It is not a B2-Sequence."<<'\n'<<'\n';
        }
    }
}