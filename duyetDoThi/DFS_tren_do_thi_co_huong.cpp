#include<bits/stdc++.h>
using namespace std;
bool check[1005];
vector<int> arr[1005];
int n,m,k;

void faster(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void DFS(int u){
    cout << u << " ";
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
        memset(check,true,sizeof(check));
        for(int i = 1;i <= n;i++){
            arr[i].clear();
        }
        cin >> n >> m >> k;
        for(int i = 1;i <= m;i++){
            int u,v;
            cin >> u >> v;
            arr[u].push_back(v);
        }
        DFS(k);
        cout << endl;
    }
}

int main(){
    solution();
    return 0;
}