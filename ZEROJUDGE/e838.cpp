#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    int area[n][n];
    memset(area, 0, sizeof area);
    vector<pair<int, int>> bomb;
    for (int i = 0; i < n; i++) {
        string f;
        cin >> f;
        for (int j = 0; j < n; j++) {
            if (f[j] == '*') {
                bomb.push_back({i, j});
            }
        }
    }
    for (int i = 0; i < bomb.size(); i++) {
        for (int j = 0; j < n; j++) {
            area[bomb[i].first][j] = 1;
        }
        for (int j = 0; j < n; j++) {
            area[j][bomb[i].second] = 1;
        }
    }
    for (int i = 0; i <n; i++) {
        for (int j = 0; j < n; j++) {
            if(area[i][j]){
                cout << "*";
            }
            else{
                cout << '0';
            }
        }
        cout << '\n';
    }
}