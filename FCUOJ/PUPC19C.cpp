//working
#include <iostream>
using namespace std;
#define ll long long

int n,m;
int save[100001];
void left(int x,int y){
    for(int i=1;i<=n;i++){
        if(save[i]>save[x] && save[i] < save[y]){
            save[i]++;
        }
    }
    save[x] = save[y]-1;
}
void right(int x, int y){
    for(int i=1;i<=n;i++){
        if(save[i]>save[x] && save[i] < save[y]){
            save[i]--;
        }
    }
    save[x] = save[y]-1;
}
void change(int x,int y){
    int c;
    c = save[x];
    save[x] = save[y];
    save[y] = c;
}

void inverse(){
    for(int i=1;i<=n;i++){
        save[i] = (n+1)-save[i];
    }
}

ll search(){
    ll ans = 0;
    for(int i=1;i<=n;i++){
        //cout << save[i] <<' ';
        if(save[i]&1){
            ans = ans + i;
        }
    }
    //cout << '\n';
    return ans;
}
int main(){
    while(cin >> n >> m) {
        for (int i = 1; i <= n; i++) {
            save[i] = i;
        }
        int c, x, y;
        for (int i = 0; i < m; i++) {
            cin >> c;
            if(c==1){
                cin >> x >> y;
                if(save[x] < save[y]){
                    right(x,y);
                }
                else{
                    left(x,y);
                    change(x,y);
                }
                search();
            }
            else if(c==2){
                cin >> x >> y;
                if(save[x] < save[y]){
                    right(x,y);
                    change(x,y);
                }
                else{
                    left(x,y);
                }
                search();
            }
            else if(c==3){
                cin >> x >> y;
                change(x,y);
                search();
            }
            else if(c==4){
                inverse();
                search();
            }
        }
        cout << search() << '\n';
    }
}