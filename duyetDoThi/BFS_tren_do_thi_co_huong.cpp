#include<bits/stdc++.h>
using namespace std;
vector<int> arr[1005];
int n,m,k;
bool check[1005];

void faster(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void BFS(int u){
    queue<int> q;
    q.push(u);
    check[u] = false;
    while(!q.empty()){
        int s = q.front();
        cout << s << " ";
        q.pop();
        for(int i = 0;i < arr[s].size();i++){
            if(check[arr[s][i]]){
                q.push(arr[s][i]);
                check[arr[s][i]] = false;
            }
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
        BFS(k);
        cout << endl;
    }
}

int main(){
    solution();
    return 0;
}