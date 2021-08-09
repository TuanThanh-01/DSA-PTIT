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

void sumLeafRight(node *root,long long &sum,bool check){
    if(root == NULL) return;
    if(root->right == NULL && root->left == NULL && check == true){
        sum += root->value;
    }
    sumLeafRight(root->right,sum,true);
    sumLeafRight(root->left,sum,false);
}

void solution(){
    faster();
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        node *tree = NULL, *parent, *child;
        map<int, node*> m;
        for(int i = 0;i < n;i++){
            int cha,con;
            char pos;
            cin >> cha >> con >> pos;
            if(m.find(cha) == m.end()){
                parent = new node(cha);
                m[cha] = parent;
                if(!tree) tree = parent;
            }
            else{
                parent = m[cha];
            }
            child = new node(con);
            if(pos == 'L'){
                parent->left = child;
            }
            else{
                parent->right = child;
            }
            m[con] = child;
        }
        long long sum = 0;
        sumLeafRight(tree, sum, true);
        cout << sum << endl;
    }
}

int main(){
    solution();
    return 0;
}