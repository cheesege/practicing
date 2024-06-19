//working
#include <bits/stdc++.h>
using namespace std;

int main(){
    string number;
    int MAX = 1e9;
    vector<int> box(MAX,0);
    vector<long long> dp(60000,0);
    int price[10] = {1,5,10,20,50,100,200,500,1000,2000};
    int index =0;
    while(getline(cin,number)){
        number = number + ' ';
        string tmp = "";
        if(number[0] == '0'){
            break;
        }
        for(int i=0;i<number.size();i++){
            if(number[i]==' '){
                box[index] = box[index]+atoi(tmp.c_str());
                tmp = "";
            }
            else{
                tmp = tmp + number[i];
            }
        }
        index++;
    }
    dp[0] = 1;
    for(int i=1;i<=51000;i++){
        for(int j=0;j<10;j++){
            if(i - price[j] < 0){
                continue;
            }
            dp[i] = (dp[i-price[j]] or dp[i]) + 1;
        }
    }
}