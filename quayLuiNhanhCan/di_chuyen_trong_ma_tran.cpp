#include<bits/stdc++.h>
using namespace std;
int n,m,a[100][100],dem;
bool check[100][100];// mảng đánh dấu các vị trí đã đi

void faster(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void nhap(){
    for(int i = 1;i <= n;i++){
        for(int j = 1;j <= m;j++){
            cin >> a[i][j];
            check[i][j] = true;
        }
    }
}

void Try(int cot,int hang){
    if(cot == n && hang == m){
        dem++;
    }
// kiểm tra điều kiện nếu vị trí tiếp theo chưa đi thì gọi quay lui
    if(cot < n && check[cot+1][hang] == true){
        check[cot][hang] = false;// đánh dấu vị trí đã đi trước đó
        Try(cot+1,hang);
        check[cot][hang] = true;// trả lại vị trí đã đánh dấu đó
    }
// tương tự với cách giải thích trên
    if(hang < m && check[cot][hang+1] == true){
        check[cot][hang] = false;
        Try(cot,hang+1);
        check[cot][hang] = true;
    }
}

void solution(){
    faster();
    int t;
    cin >> t;
    while(t--){
        cin >> n >> m;
        dem = 0;
        nhap();
        Try(1,1);
        cout << dem << endl;
    }
}

int main(){
    solution();
    return 0;
}