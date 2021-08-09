#include<bits/stdc++.h>
using namespace std;

void faster(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

struct node{
    int value;
    node *left, *right;
    node(int x){
        value = x;
        left = right = NULL;
    }
};

void makeNode(node *root, int parent, int child,char pos){
    if(pos == 'L'){
        root->left = new node(child);
    }
    else{
        root->right = new node(child);
    }
}

void insertNode(node *root, int parent, int child, char pos){
    if(root == NULL) return;
    if(root-> value == parent){
        makeNode(root,parent,child,pos);
    }
    else{
        insertNode(root->left, parent,child,pos);
        insertNode(root->right,parent,child,pos);
    }
}

int isEqual(node * a, node * b){
    if(a == NULL && b == NULL) return true;
    if(a != NULL && b != NULL) return (a->value == b->value && isEqual(a->left, b->left) && isEqual(a->right,b->right));
    return false; 
}

void solution(){
    faster();
    int t;
    cin >> t;
    while(t--){
        faster();
        int n,m;
        cin >> n;
        node *Tree1 = NULL;
        for(int i = 0;i < n;i++){
            int parent,child;
            char pos;
            cin >> parent >> child >> pos;
            if(Tree1 == NULL){
                Tree1 = new node(parent);
                makeNode(Tree1, parent,child, pos);
            }
            else{
                insertNode(Tree1, parent, child, pos);

            }
        }

        cin >> m;
        node * Tree2 = NULL;
        for(int i = 0;i < m;i++){
            int parent,child;
            char pos;
            cin >> parent >> child >> pos;
            if(Tree2 == NULL){
                Tree2 = new node(parent);
                makeNode(Tree2, parent,child,pos);
            }
            else{
                insertNode(Tree2,parent,child,pos);
            }
        }
        cout << isEqual(Tree1, Tree2) << endl;
    }
}

int main(){
    solution();
    return 0;
}