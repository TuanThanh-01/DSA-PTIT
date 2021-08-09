#include<bits/stdc++.h>
using namespace std;

void faster(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

struct node{
    int value;
    node *left,*right;
    node(int x){
        value = x;
        left = right = NULL;
    }
};

node *createBST(int *a,int start,int end){
    if(start > end) return NULL;
    int mid =(start + end) / 2;
    node *tmp = new node(a[mid]);
    tmp->left = createBST(a, start, mid - 1);
    tmp->right = createBST(a, mid + 1, end);
    return tmp;
}

void countNodeLeaf(node *root, int &dem){
    if(root == NULL) return;
    if(root->left == NULL && root->right == NULL){
        dem++;
    }
    countNodeLeaf(root->left,dem);
    countNodeLeaf(root->right,dem);
}

void solution(){
    faster();
    int t;
    cin >> t;
    while(t--){
        int a[1005],n;
        cin >> n;
        for(int i = 0;i < n;i++){
            cin >> a[i];
        }
        sort(a, a + n);
        node *Tree = createBST(a, 0, n - 1);
        int sum = 0;
        countNodeLeaf(Tree,sum);
        cout << sum << endl;
    }
}

int main(){
    solution();
    return 0;
}