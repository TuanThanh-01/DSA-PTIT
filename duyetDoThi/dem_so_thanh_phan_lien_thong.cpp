#include<bits/stdc++.h>
using namespace std;
vector<int> arr[1005];
bool check[1005];
int m,n;

void faster(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void init(){
    cin >> n >> m;
    for(int i = 1;i <= 1005;i++){
        arr[i].clear();
    }
    for(int i = 1;i <= m;i++){
        int u,v;
        cin >> u >> v;
        arr[u].push_back(v);
        arr[v].push_back(u);
    }
    memset(check,true,sizeof(check));
}

void DFS(int u){
    check[u] = false;
    for(int i = 0;i < arr[u].size();i++){
        if(check[arr[u][i]]){
            DFS(arr[u][i]);
        }
    }
}

void solution(){
    faster();
    int t;
    cin >> t;
    while(t--){
        init();
        int count = 0;
        for(int i = 1;i <= n;i++){
            if(check[i]){
                count += 1;
                DFS(i);
            }
        }
        cout << count << endl;
    }
}

int main(){
    solution();
    return 0;
}