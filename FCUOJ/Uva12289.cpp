#include <iostream>
using namespace std;

int main(){
    //one two three four five six seven eight nine ten
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        string a;
        cin >> a;
        if(a.size() == 3){
            int one = 0,two = 0 ,six = 0,ten = 0;
            switch (a[0]) {
                case 'o' :
                    one++;
                    break;
                case 't' :
                    two++;
                    ten++;
                    break;
                case 's' :
                    six++;
                    break;
            }
            switch (a[1]) {
                case 'n' :
                    one++;
                    break;
                case 'w' :
                    two++;
                    break;
                case 'i' :
                    six++;
                    break;
                case 'e' :
                    ten++;
                    break;
            }
            switch (a[2]) {
                case 'e' :
                    one++;
                    break;
                case 'o' :
                    two++;
                    break;
                case 'x' :
                    six++;
                    break;
                case 'n' :
                    ten++;
                    break;
            }
            if(one == 2){
                cout << 1 << '\n';
            }
            if(two == 2){
                cout << 2 << '\n';
            }
            if(six == 2){
                cout << 6 << '\n';
            }
            if(ten == 2){
                cout << 10 << '\n';
            }
        }
        else if(a.size() == 4){
            int four = 0,five = 0 ,nine = 0;
            switch (a[0]) {
                case 'f' :
                    four++;
                    five++;
                    break;
                case 'n' :
                    nine++;
                    break;
            }
            switch (a[1]) {
                case 'o' :
                    four++;
                    break;
                case 'i' :
                    nine++;
                    five++;
                    break;
            }
            switch (a[2]) {
                case 'u' :
                    four++;
                    break;
                case 'v' :
                    five++;
                    break;
                case 'n' :
                    nine++;
                    break;
            }
            switch (a[3]) {
                case 'r' :
                    four++;
                    break;
                case 'e' :
                    nine++;
                    five++;
                    break;
            }
            if(four == 3){
                cout << 4 << '\n';
            }
            if(five == 3){
                cout << 5 << '\n';
            }
            if(nine == 3){
                cout << 9 << '\n';
            }
        }
        else if(a.size() == 5){
            int three = 0,seven = 0 ,eight = 0;
            switch (a[0]) {
                case 't' :
                    three++;
                    break;
                case 's' :
                    seven++;
                    break;
                case 'e' :
                    eight++;
                    break;
            }
            switch (a[1]) {
                case 'h' :
                    three++;
                    break;
                case 'e' :
                    seven++;
                    break;
                case 'i' :
                    eight++;
                    break;
            }
            switch (a[2]) {
                case 'r' :
                    three++;
                    break;
                case 'v' :
                    seven++;
                    break;
                case 'g' :
                    eight++;
                    break;
            }
            switch (a[3]) {
                case 'h' :
                    eight++;
                    break;
                case 'e' :
                    three++;
                    seven++;
                    break;
            }
            switch (a[4]) {
                case 'e' :
                    three++;
                    break;
                case 'n' :
                    seven++;
                    break;
                case 't' :
                    eight++;
                    break;
            }
            if(three == 4){
                cout << 3 << '\n';
            }
            if(seven == 4){
                cout << 7 << '\n';
            }
            if(eight == 4){
                cout << 8 << '\n';
            }
        }
    }
}