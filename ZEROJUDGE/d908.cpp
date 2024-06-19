//DFS
//recursion
//by_answer
#include <iostream>
#include <map>
#include <vector>
using namespace std;;

map<char, vector<pair<char, int>>> mp;//用地圖儲存每個 a-b的距離 //由於key不重複所以只能用vector存複數路線
char start;//起始點名稱

int func(int start, int total){ //開頭字元 從上次遞迴下來的長度
    if(!mp.count(start)){ //如果map裡面不含有接續start的邊 即自己無法延續 走到盡頭
        return total; //回傳最大長度總和
    }
    int maxi = 0; //最大權重
    for(pair<char, int> p: mp[start]){//對於map裡面每個start開頭的pair<char,int>迴圈 冒號可在不知道有幾個值的情況下呼叫
        maxi = max(func(p.first, total+p.second), maxi);//將maxi取自己跟分支的最大值 同時把自己的延續 即pair<char,int>迴圈
    }
    return maxi;//回傳最大值
}
int main(){
    int num;//有向邊的個數 即為有幾條路徑
    while (cin >> start >> num){//多筆測資的開頭跟邊數
        mp.clear(); //初始化地圖
        char a,b;//邊的開頭結尾
        int n;//邊的權重
        for(int i=0;i<num;i++){
            cin >> a >> b >> n;
            mp[a].push_back({b,n});//把邊的資訊存到map
        }
        cout << func(start, 0) << "\n";
    }

}