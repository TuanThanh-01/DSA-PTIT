#include<bits/stdc++.h>
using namespace std;
int a[1005];

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

void insertnode(node* &root,int x){
    if(root == NULL){
        root = new node(x);
        return;
    }
    if(root->value > x) insertnode(root->left,x);
    if(root->value < x) insertnode(root->right,x);
}

void postorder(node *root){
    if(root == NULL) return;
    if(root->left) postorder(root->left);
    if(root->right) postorder(root->right);
    cout << root->value << " ";
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
            cin >> a[i];
            insertnode(tree,a[i]);
        }
        postorder(tree);
        cout << endl;
    }
}

int main(){
    solution();
    return 0;
}