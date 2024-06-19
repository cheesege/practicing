//by_answer
#include<bits/stdc++.h>
using namespace std;;

int main(){
    int x;
    while (cin >> x){
        queue<int> card;
        if(x==0){
            return  0;
        }
        else{
            for(int i=0;i<x;i++){
                card.push(i+1);
            }
            cout << "Discarded cards:";
            for (int i = 0; i < x-1; i++){
                if (i != 0) cout << ',';
                cout << ' ' << card.front();
                card.pop();
                card.push(card.front());
                card.pop();
            }
            cout << endl << "Remaining card: " << card.front() << endl;
        }
    }
}