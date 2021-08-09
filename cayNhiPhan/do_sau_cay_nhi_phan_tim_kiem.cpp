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

void insertnode(node* &root,int x){
    if(root == NULL){
        root = new node(x);
    }
    if(root->value > x) insertnode(root->left, x);
    if(root->value < x) insertnode(root->right, x);
}

int depth(node *root){
    if(root == NULL) return -1;
    return max(depth(root->left), depth(root->right)) + 1;
}

void solution(){
    faster();
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        node* tree = NULL;
        int a[1005];
        for(int i = 0;i < n;i++){
            cin >> a[i];
            insertnode(tree,a[i]);
        }
        cout << depth(tree) << endl;
    }
}

int main(){
    solution();
    return 0;
}