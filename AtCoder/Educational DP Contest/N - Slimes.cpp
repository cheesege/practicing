//reading
//by_answer
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define cheese ios::sync_with_stdio(0);cin.tie(0);
int N;
int INF = 1e9+5;
int A[400];
int prefix[405] = {0};
int dp[405][405] = {0};

int sum(int i, int j) { return prefix[j - 1] - ((i >= 1) ? prefix[i - 1] : 0); }
int f(int i,int j){
    if (dp[i][j] != INF) {
        return dp[i][j];
    }

    if (j - i == 1) {
        return 0;
    }

    int ret = INF;
    for (int k = i + 1; k < j; k++) {
        int val = f(i, k) + f(k, j) + sum(i, k) + sum(k, j);
        ret = min(ret, val);
    }

    dp[i][j] = ret;
    for(int l=0;l<=N;l++){
        for(int p=0;p<=N;p++){
            cout << dp[l][p]<< ' ';
        }
        cout << '\n';
    }
    return ret;
}

signed main() {
    //cheese
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    prefix[0] = A[0];
    for (int i = 1; i <= N; i++) {
        prefix[i] = prefix[i - 1] + A[i];
    }

    for (int i = 0; i < N; i++) {
        for (int j = i; j <= N; j++) {
            dp[i][j] = INF;
        }
    }

    cout << f(0, N) << endl;

    return 0;
}
