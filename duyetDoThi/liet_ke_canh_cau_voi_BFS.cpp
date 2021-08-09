#include<bits/stdc++.h>
using namespace std;
vector<int> arr[1005];
int n,m;
bool check[1005];

void faster(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void init(){
    for(int i = 1;i <= 1005;i++){
        arr[i].clear();
    }
    cin >> n >> m;
    for(int i = 1;i <= m;i++){
        int u,v;
        cin >> u >> v;
        arr[u].push_back(v);
        arr[v].push_back(u);
    }
    memset(check,true,sizeof(check));
}

int BFS(int u){
    int dem = 0;
    queue<int> q;
    q.push(u);
    check[u] = false;
    while(!q.empty()){
        dem++;
        int s = q.front();
        q.pop();
        for(int i = 0;i < arr[s].size();i++){
            if(check[arr[s][i]]){
                q.push(arr[s][i]);
                check[arr[s][i]] = false;
            }
        }
    }
    return dem;
}

void canh_cau(){
    for(int i = 1;i <= n;i++){
        for(int j = 0;j < arr[i].size();j++){
            //kiểm tra nếu đỉnh thứ hai lớn hơn đỉnh đầu tiên
            if(arr[i][j] > i){
                int k = arr[i][j];// lưu đỉnh thứ 2
                arr[i].erase(arr[i].begin() + j);//xóa đỉnh đó đi
                //kiểm tra BFS nếu nó không duyệt qua các đỉnh thì in ra
                if(BFS(i) != n){
                    cout << i << " " << k << " ";
                }
                arr[i].insert(arr[i].begin() + j,k);// thêm lại đỉnh đó vào vị trí ban đầu
                memset(check,true,sizeof(check));
            }
        }
    }
    cout << endl;
}

void solution(){
    faster();
    int t;
    cin >> t;
    while(t--){
        init();
        canh_cau();
    }
}

int main(){
    solution();
    return 0;
}