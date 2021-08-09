#include<bits/stdc++.h>
using namespace std;
vector<int> arr[1005];
bool check[1005];
int n,m,t,s,truoc[1005];

void faster(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void DFS(int u){
    check[u] = false;
    for(int i = 0;i < arr[u].size();i++){
        if(check[arr[u][i]]){
            truoc[arr[u][i]] = u;
            DFS(arr[u][i]);
        }
    }
}

void solution(){
    faster();
    int l;
    cin >> l;
    while(l--){
        memset(check,true,sizeof(check));
        memset(truoc,0,sizeof(truoc));
        for(int i = 1;i <= n;i++){
            arr[i].clear();
        }
        cin >> n >> m;
        for(int i = 1;i <= m;i++){
            int u,v;
            cin >> u >> v;
            arr[u].push_back(v);
            arr[v].push_back(u);
        }
        int q;
        cin >> q;
        while(q--){
            memset(check,true,sizeof(check));
            memset(truoc,0,sizeof(truoc));
            int t,s;
            cin >> t >> s;
            DFS(t);
            if(truoc[s] == 0){
                cout << "NO" << endl;
            }
            else{
                cout << "YES" << endl;
            }
        }
    }
}

int main(){
    solution();
    return 0;
}
