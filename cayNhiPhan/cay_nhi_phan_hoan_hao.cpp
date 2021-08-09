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
        }
        else{
            insertnode(tmp->left,parent,child,pos);
            insertnode(tmp->right,parent,child,pos);
        }
    }
}

bool check1(node *root){
// kiểm tra các node trung gian đều có 2 con
    if (root == NULL) return true;
    node *trai = root->left, *phai = root->right;
// nếu node 2 bên cùng bằng NULL trả về true
    if (trai == NULL && phai == NULL) return true;
// nếu 2 bên khác nhau trả về false
    if ((trai == NULL && phai != NULL) || (trai != NULL && phai == NULL)) return false;
// đệ quy để tìm tiếp tục 2 bên 
    return check1(trai) && check1(phai);
}

bool kiemtra(node *tmp){
// tạo cấu trúc pair để lưu node và bậc của nó
    queue< pair<node*,int> > q;
    vector<int> res;// lưu bậc của cây
    q.push({tmp,1});
    while(!q.empty()){
        node *p = q.front().first;
        int level = q.front().second;
        q.pop();
        if(p->left == NULL && p->right == NULL){
            res.push_back(level);
            if(res.size() > 1 && res.at(0) != res.back()){
                return false;
            }
        }
        if(p->left){
            q.push({p->left,level + 1});
        }
        if(p->right){
            q.push({p->right,level + 1});
        }
    }
    return true;
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
        if(check1(tree) && kiemtra(tree)){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
    }
}

int main(){
    solution();
    return 0;
}