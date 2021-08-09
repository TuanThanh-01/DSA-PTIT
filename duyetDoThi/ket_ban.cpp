#include<bits/stdc++.h>
using namespace std;
vector<int> arr[100005];
int n, m, dem;
bool check[100005];

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
    memset(check, true, sizeof(check));
}

int DFS(int u){
    check[u] = false;
    dem++;
    for(int i = 0;i < arr[u].size();i++){
        if(check[arr[u][i]] == true){
            DFS(arr[u][i]);
        }
    }
    return dem;
}

void handle(){
    int kq = 0;
    memset(check,true,sizeof(check));
    for(int i = 1;i <= n;i++){
        if(check[i]){
            dem = 0;
            kq = max(kq, DFS(i));
        }
    }
    cout << kq << endl;
}

void solution(){
    faster();
    int t;
    cin >> t;
    while(t--){
        init();
        handle();
    }
}

int main(){
    solution();
    return 0;
}