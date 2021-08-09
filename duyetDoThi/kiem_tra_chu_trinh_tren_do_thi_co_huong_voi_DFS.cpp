#include<bits/stdc++.h>
using namespace std;
vector<int> arr[1005];
int visited[1005],n,m;
bool check = true;

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
    }
    memset(visited,0,sizeof(visited));
}

void DFS(int u){
    visited[u] = 1;
    for(int i = 0;i < arr[u].size();i++){
        int v = arr[u][i];
        if(visited[v] == 0){
            DFS(v);
        }
        else if(visited[v] == 1){
            check = true;
        }
        visited[v] = 2;// gắn bằng 2 vì đỉnh này đã được xét hoàn toàn
    }
}

void chu_trinh(){
    for(int i = 1;i <= n;i++){
        memset(visited,0,sizeof(visited));
        check = false;
        DFS(i);
        if(check == true){
            cout << "YES" << endl;
            return;
        }
    }
    if(check == false){
        cout << "NO" << endl;
    }
}

void solution(){
    faster();
    int t;
    cin >> t;
    while(t--){
        init();
        chu_trinh();
    }
}

int main(){
    solution();
    return 0;
}