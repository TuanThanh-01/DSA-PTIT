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

node* newnode(int val){
    node* tmp = new node;
    tmp->value = val;
    tmp->left = NULL;
    tmp->right = NULL;
    return tmp;
}

node* createBST(int *a,int start,int end){
    if(start > end) return NULL;
    int mid = (start + end)/2;
    node* temp = newnode(a[mid]);
    temp->left = createBST(a, start, mid - 1);
    temp->right = createBST(a, mid + 1,end);
    return temp; 
}

void preorder(node* tmp){
    if(tmp){
        cout << tmp->value << " ";
        preorder(tmp->left);
        preorder(tmp->right);
    }
}

void solution(){
    faster();
    int t,n;
    cin >> t;
    while(t--){
        int a[100005];
        cin >> n;
        for(int i = 0;i < n;i++){
            cin >> a[i];
        }
        sort(a, a+n);
        node *tree = createBST(a, 0, n - 1);
        preorder(tree);
        cout << endl;
    }
}

int main(){
    solution();
    return 0;
}