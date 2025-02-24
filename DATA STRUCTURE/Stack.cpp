#include <bits/stdc++.h>
using namespace std;
#define int long long
#define cheese ios::sync_with_stdio(0);cin.tie(0);
#define pii pair<int,int>
struct node {
    int value;
    node *next;
};
void push(node **head,int value);
void print(node **head);
void pop(node **head);
bool empty(node **head);
int size(node **head);
signed main(){
    node *head = NULL;
    int a,b;
    while (cin >> a) {
        if (a==0) {
            return 0;
        }
        if (a==1) {
            cout << "輸入value:";
            cin >> b;
            push(&head,b);
        }
        if (a==2) {
            pop(&head);
        }
        if (a==3) {
            cout << "Stack大小為" << size(&head) << '\n';
        }
    }

}
void push(node **head,int value) {
    node *newnode = (node*)malloc(sizeof (node*));//malloc a node and point it by newnode
    newnode->value = value;
    node *previous;
    if (empty(head)) {//not initialized yet
        *head = newnode;
        print(head);
        return;
    }
    previous = *head;
    *head = newnode;
    newnode->next = previous;
    print(head);
}
void print(node **head) {
    node *current = *head;
    while (current!=NULL) {
        cout << current->value << " - ";
        current = current->next;
    }
    cout << '\n';
}
void pop(node **head) {
    if (empty(head)) {
        cout << "U CAN NOT POP EMPTY STACK" << '\n';
        return;
    }
    node *remove = *head;
    *head = remove->next;
    print(head);
}
bool empty(node **head) {
    if (*head==NULL) {
        return true;
    }
    return false;
}
int size(node **head) {
    int ans = 0;
    if (empty(head)) {
        return ans;
    }
    node *current = *head;
    while (current!=NULL) {
        ans++;
        current = current->next;
    }
    return ans;
}
