#include<bits/stdc++.h>
using namespace std;
vector<int> arr[1005];
bool check[1005];

void faster(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void DFS(int u){
    cout << u << " ";// duyệt đỉnh u
    check[u] = false;
    for(int i = 0;i < arr[u].size();i++){
        if(check[arr[u][i]] == true){//tìm đỉnh kề chưa xét
            DFS(arr[u][i]);
        }
    }
}

void solution(){
    faster();
    int t;
    cin >> t;
    while(t--){
        memset(check,true,sizeof(check));
        // khởi tạo lại arr[i] sau mỗi bước
        for(int i = 0;i < 1005;i++){
            arr[i].clear();
        }
        int n,m,k;
        cin >> n >> m >> k;
        for(int i = 0;i < m;i++){
            int u,v;
            cin >> u >> v;
            arr[u].push_back(v);
            arr[v].push_back(u);
        }
        DFS(k);
        cout << endl;
    }
}

int main(){
    solution();
    return 0;
}