#include <iostream>
using namespace std;

int main(){
    string a;
    int cas = 0;
    while(cin >> a){
        if(a=="#"){
            return 0;
        }
        cas++;
        cout << "Case " << cas << ": ";
        if(a == "HELLO"){
            cout << "ENGLISH";
        }
        else if(a == "HOLA"){
            cout << "SPANISH";
        }
        else if(a == "HALLO"){
            cout << "GERMAN";
        }
        else if(a == "BONJOUR"){
            cout << "FRENCH";
        }
        else if(a == "CIAO"){
            cout << "ITALIAN";
        }
        else if(a == "ZDRAVSTVUJTE"){
            cout << "RUSSIAN";
        }
        else{
            cout << "UNKNOWN";
        }
        cout << '\n';
    }
}