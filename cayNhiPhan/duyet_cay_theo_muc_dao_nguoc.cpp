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
    node(int x){
        value = x;
        left = right = NULL;
    }
};

void makeNode(node *root,int parent,int child, char pos){
    if(pos == 'L'){
        root->left = new node(child);
    }
    else{
        root->right = new node(child);
    }
}

void insertNode(node *root, int parent,int child, char pos){
    if(root == NULL) return;
    if(root->value == parent){
        makeNode(root,parent,child,pos);
    }
    else{
        insertNode(root->left,parent,child,pos);
        insertNode(root->right,parent,child,pos);
    }
}

void reveseLevelOrder(node *root){
    queue<node*> q;
    stack<node*> st;
    q.push(root);
    while(!q.empty()){
        node *tmp = q.front();q.pop();
        st.push(tmp);
        if(tmp->right) q.push(tmp->right);
        if(tmp->left) q.push(tmp->left);
    }
    while(!st.empty()){
        cout << st.top()->value << " ";
        st.pop();
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
                tree = new node(parent);
                makeNode(tree,parent,child,pos);
            }
            else{
                insertNode(tree,parent,child,pos);
            }
        }
        reveseLevelOrder(tree);
        cout << endl;
    }
}

int main(){
    solution();
    return 0;
}