#include<bits/stdc++.h>
using namespace std;

void faster(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int search(int a[],int n,int x){
    for(int i = 0;i < n;i++){
        if(a[i] == x){
            return i;
        }
    }
    return -1;
}

void postOrder(int in[],int pre[], int n){
    int root = search(in,n,pre[0]);// tìm gốc
    // tìm cây con bên trái nếu nó không rỗng
    if(root != 0){
        postOrder(in, pre + 1,root);
    }
    //tìm cây con bên phải nếu nó không rỗng
    if(root != n - 1){
        postOrder(in + root + 1,pre + root + 1, n - root - 1);
    }
    cout << pre[0] << " ";
}

void solution(){
    faster();
    int t;
    cin >> t;
    while(t--){
        int pre[1005], in[1005], n;
        cin >> n;
        for(int i = 0;i < n;i++){
            cin >> in[i];
        }
        for(int j = 0;j < n;j++){
            cin >> pre[j];
        } 
        postOrder(in,pre,n);
        cout << endl;
    }
}

int main(){
    solution();
    return 0;
}