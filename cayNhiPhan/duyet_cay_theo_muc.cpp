#include<bits/stdc++.h>
using namespace std;

void faster(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

struct node{
    int value;
    node *left;
    node *right;
};

node *makenode(int val){
    node *tmp = new node;
    tmp->value = val;
    tmp->left = NULL;
    tmp->right = NULL;
    return tmp;
}

void insertnode(node *tmp,int parent,int child,char pos){
    if(tmp != NULL){
        if(tmp->value == parent){
            if(pos == 'L'){
                tmp->left = makenode(child);
            }
            else{
                tmp->right = makenode(child);
            }
            return;
        }
        else{
            insertnode(tmp->left,parent,child,pos);
            insertnode(tmp->right,parent,child,pos);
        }
    }
}

void level_order(node *root){
    queue<node* > q;
    q.push(root);
    while(!q.empty()){
        node *nd = q.front();
        q.pop();
        cout << nd->value << " ";
        if(nd->left != NULL) q.push(nd->left);
        if(nd->right != NULL) q.push(nd->right);
    }
}

void solution(){
    faster();
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        node *tree = NULL;
        for(int i = 0;i < n;i++){
            int parent,child;
            char pos;
            cin >> parent >> child >> pos;
            if(tree == NULL){
                tree = makenode(parent);
            }
            insertnode(tree,parent,child,pos);
        }
        level_order(tree);
        cout << endl;
    }
}

int main(){
    solution();
    return 0;
}