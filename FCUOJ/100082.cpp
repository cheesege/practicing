#include <iostream>
using namespace std;

int main(){
    char change[127];
    change['S'] = 'A';
    change['D'] = 'S';
    change['F'] = 'D';
    change['G'] = 'F';
    change['H'] = 'G';
    change['J'] = 'H';
    change['K'] = 'J';
    change['L'] = 'K';
    change[';'] = 'L';
    change['\''] = ';';
    change['W'] = 'Q';
    change['E'] = 'W';
    change['R'] = 'E';
    change['T'] = 'R';
    change['Y'] = 'T';
    change['U'] = 'Y';
    change['I'] = 'U';
    change['O'] = 'I';
    change['P'] = 'O';
    change['['] = 'P';
    change[']'] = '[';
    change['\\'] = ']';
    change['2'] = '1';
    change['3'] = '2';
    change['4'] = '3';
    change['5'] = '4';
    change['6'] = '5';
    change['7'] = '6';
    change['8'] = '7';
    change['9'] = '8';
    change['0'] = '9';
    change['-'] = '0';
    change['='] = '-';
    change['X'] = 'Z';
    change['C'] = 'X';
    change['V'] = 'C';
    change['B'] = 'V';
    change['N'] = 'B';
    change['M'] = 'N';
    change[','] = 'M';
    change['.'] = ',';
    change['/'] = '.';
    change[' '] = ' ';
    string a;
    while(getline(cin,a)){
        for(int i=0;i<a.size();i++){
            cout << change[a[i]];
        }
        cout << '\n';
    }
}