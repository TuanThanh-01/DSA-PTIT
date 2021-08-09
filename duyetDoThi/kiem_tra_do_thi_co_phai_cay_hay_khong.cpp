#include<bits/stdc++.h>
using namespace std;
vector<int> arr[1005];
int n;
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
    cin >> n;
    for(int i = 1;i <= n - 1;i++){
        int u,v;
        cin >> u >> v;
        arr[u].push_back(v);
        arr[v].push_back(u);
    }
    memset(check,true,sizeof(check));
}

void BFS(int u){
    queue<int> q;
    q.push(u);
    check[u] = false;
    while(!q.empty()){
        int s = q.front();
        q.pop();
        for(int i = 0;i < arr[s].size();i++){
            if(check[arr[s][i]]){
                check[arr[s][i]] = false;
                q.push(arr[s][i]);
            }
        }
    }
}

bool check_lien_thong(){
    int dem = 0;
    for(int i = 1;i <= n;i++){
        if(check[i]){
            BFS(i);
            dem += 1;
        }
    }
    if(dem == 1){
        return true;
    }
    return false;
}

void solution(){
    faster();
    int t;
    cin >> t;
    while(t--){
        init();
        if(check_lien_thong() == true){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}

int main(){
    solution();
    return 0;
}