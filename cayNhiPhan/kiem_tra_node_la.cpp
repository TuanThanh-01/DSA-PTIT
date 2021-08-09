#include<bits/stdc++.h>
using namespace std;

void faster(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

struct node{
    int value;
    node *left;// con trỏ node bên trái
    node *right;// con trỏ node bên phải 
};

// tạo một node mới 
node *makenode(int val){
    node *tmp = new node;// cấp phát bộ nhớ cho tmp
    tmp->value = val;// gắn giá trị cho node
    tmp->left = NULL;// tạo liên kết trái cho node
    tmp->right = NULL;// tạo liên kết phải cho node
    return tmp;// trả lại node được tạo ra
}

void insertnode(node *tmp,int parent,int child,char pos){
// kiểm tra node khác null    
    if(tmp != NULL){
// nếu giá trị của node tmp = parent
        if(tmp->value == parent){
        // tạo node bên trái
            if(pos == 'L'){
                tmp->left = makenode(child);
            }
        // tạo node bên phải
            else{
                tmp->right = makenode(child);
            }
            return;
        }
// nếu node khác parent
        else{
            insertnode(tmp->left,parent,child,pos);
            insertnode(tmp->right,parent,child,pos);
        }
    }
}

bool kiemtra(node *tmp){
    queue< pair<node*,int> > q;
    vector<int> res;// lưu bậc của cây
    q.push({tmp,1});
    while(!q.empty()){
        node *tam = q.front().first;
        int level = q.front().second;
        q.pop();
        if(tam->left == NULL && tam-> right == NULL){
            res.push_back(level);
            if(res.at(0) != res.back() && res.size() > 1){
                return false;
            }
        }
        if(tam->left){
            q.push({tam->left,level + 1});
        }
        if(tam->right){
            q.push({tam->right,level + 1});
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
        if(kiemtra(tree) == true){
            cout << 1 << endl;
        }
        else{
            cout << 0 << endl;
        }
    }
}

int main(){
    solution();
    return 0;
}