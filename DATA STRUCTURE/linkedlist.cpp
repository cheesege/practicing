#include <iostream>
#include <cstring>
using namespace std;
//#define int long long
#define cheese ios::sync_with_stdio(0);cin.tie(0);
#define pii pair<int,int>
typedef struct node {
    int data;
    node *next;
}Node;

void addnode(Node **start,int value) {
    //cout << start;
    Node *newnode = (Node*)malloc(sizeof (Node));
    newnode->data = value;
    newnode->next = NULL;


    if (*start==NULL) {
        *start = newnode;
        return;
    }
    Node *current = *start;
    while (current->next!=NULL) {
        current = current->next;
    }
    current->next = newnode;
}
void print_list(Node *head) {
    while (head!=NULL) {
        cout << head->data << ' ';
        head = head->next;
    }
}
void free_list(Node *head) {
    Node *current = head;
    Node *previous;
    while (current->next!=NULL) {
        previous = current;
        current = current->next;
        free(previous);
    }
}
signed main(){
    int a;
    Node *head = NULL;
    while (cin >> a) {
        if (a==0) {
            free_list(head);
            head = NULL;
            continue;
        }
        addnode(&head,a);
        print_list(head);
        cout << '\n';
    }
}
