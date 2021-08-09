#include<bits/stdc++.h>
using namespace std;
vector<int> arr[1005];
int visited[1005],n,m;
bool check;

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
    memset(visited,0,sizeof(visited));
}

void BFS(int u){
    queue<int> q;
    q.push(u);
    visited[u] = 1;
    while(!q.empty()){
    // nếu check = true thì dừng vòng lặp
        if(check == true){
            break;
        }
        int s = q.front();
        q.pop();
        for(int i = 0;i < arr[s].size();i++){
            if(visited[arr[s][i]] == 0){
                visited[arr[s][i]] = 1;
                q.push(arr[s][i]);
            }
            else if(visited[arr[s][i]] == 1){
                check = true;
            }
        }
        visited[s] = 2;// gắn bằng 2 vì đỉnh này đã xét hoàn toàn
    }
}

void chu_trinh(){
    for(int i = 1;i <= n;i++){
        memset(visited,0,sizeof(visited));
        check = false;
        BFS(i);
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