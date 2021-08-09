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

node *newnode(int val){
    node *tmp = new node;
    tmp-> value = val;
    tmp->left = tmp->right = NULL;
    return tmp;
}

node *createBST(int *a,int start, int end){
    if(start > end) return NULL;
    int mid = (start + end)/2;
    node *tmp = newnode(a[mid]);
    tmp->left = createBST(a, start,mid - 1);
    tmp->right = createBST(a, mid + 1, end);
    return tmp;
}

void postorder(node *tmp){
    if(tmp == NULL) return;
    postorder(tmp->left);
    postorder(tmp->right);
    cout << tmp->value << " ";
}

void solution(){
    faster();
    int t;
    cin >> t;
    while(t--){
        int n,a[100005];
        cin >> n;
        for(int i = 0;i < n;i++){
            cin >> a[i];
        }
        sort(a, a + n);
        node *tree = createBST(a, 0, n - 1);
        postorder(tree);
        cout << endl;
    }
}

int main(){
    solution();
    return 0;
}