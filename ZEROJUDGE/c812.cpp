//DFS
//by_answer
//working
#include<bits/stdc++.h>
using namespace std;;

map <int, vector<pair<int, int> > > mp;//用map存取地圖
int num; //邊數
int start;//開始節點
int q;//要求相關度
int arr[5005]; //存取每個結果 第四子題說明N <= 5000

void func(int n, int last, int mini){
    for (pair<int, int> p: mp[n]){
        if (p.first == last){//如果你下一條路等於你的上個節點 即走原路
            continue;
        }else{
            arr[p.first] = min(p.second, mini);
            func(p.first, n, min(p.second, mini));
        }
    }
}

int main(){
    cin >> num >> start >> q;
    mp.clear();
    int a, b, c, ans = 0, maxi = 0;
    for (int i = 0; i < num-1; i++){
        cin >> a >> b >> c; //輸入 開頭 結尾 邊長
        if (c > maxi) maxi = c;
        mp[a].push_back({b, c});//此為無向圖 即可以雙向連線
        mp[b].push_back({a, c});//所以可以從 a 跟 b 兩端走
    }
    func(start, num+1, maxi);
    for (int i = 1; i <= num; i++){
        if (i == start) continue;
        if (arr[i] >= q) ans++;
    }
    cout << ans << "\n";//輸出符合要求的數量
}