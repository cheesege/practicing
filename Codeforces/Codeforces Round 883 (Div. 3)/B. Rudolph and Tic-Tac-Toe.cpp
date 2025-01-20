#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int crosses=0,noughts=0,pluses=0;
        char place[3][3];
        for(int j=0;j<3;j++){
            string a;
            cin >> a;
            for(int k=0;k<3;k++){
                place[j][k] = a[k];
            }
        }
        for(int j=0;j<3;j++){
            if(place[j][0]==place[j][1] && place[j][0]==place[j][2]){
                if(place[j][0] == 'X'){
                    crosses++;
                }
                else if(place[j][0] == 'O'){
                    noughts++;
                }
                else if(place[j][0] == '+'){
                    pluses++;
                }
            }
        }
        for(int j=0;j<3;j++){
            if(place[0][j]==place[1][j] && place[0][j]==place[2][j]){
                if(place[0][j] == 'X'){
                    crosses++;
                }
                else if(place[0][j] == 'O'){
                    noughts++;
                }
                else if(place[0][j] == '+'){
                    pluses++;
                }
            }
        }
        if(place[0][0]==place[1][1] && place[0][0]==place[2][2]){
            if(place[0][0] == 'X'){
                crosses++;
            }
            else if(place[0][0] == 'O'){
                noughts++;
            }
            else if(place[0][0] == '+'){
                pluses++;
            }
        }
        if(place[0][2]==place[1][1] && place[2][0]==place[1][1]){
            if(place[1][1] == 'X'){
                crosses++;
            }
            else if(place[1][1] == 'O'){
                noughts++;
            }
            else if(place[1][1] == '+'){
                pluses++;
            }
        }
        if(crosses+noughts+pluses>1 || crosses+noughts+pluses==0){
            cout << "DRAW" << '\n';
        }
        else if(crosses==1){
            cout << "X" << '\n';
        }
        else if(noughts==1){
            cout << "O" << '\n';
        }
        else if(pluses==1){
            cout << "+" << '\n';
        }
    }
}