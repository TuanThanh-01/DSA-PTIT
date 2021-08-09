#include<bits/stdc++.h>
using namespace std;
vector<int> arr[1005];
int n,m;
bool check[1005] = {true};
vector<int> res;

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
    res.clear();
    for(int i = 1;i <= m;i++){
        int u,v;
        cin >> u >> v;
        arr[u].push_back(v);
        arr[v].push_back(u);
    }
    memset(check,true,sizeof(check));
}

int BFS(int u){
    int count = 0;
    queue<int> q;
    q.push(u);
    check[u] = false;
    while(!q.empty()){
        count++;
        int s = q.front();
        q.pop();
        for(int i = 0;i < arr[s].size();i++){
            if(check[arr[s][i]]){
                q.push(arr[s][i]);
                check[arr[s][i]] = false;
            }
        }
    }
    return count;
}

void dinh_tru(){
    for(int i = 1;i <= n;i++){
        if(i != 1){
            check[i] = false;
            if(BFS(1) != n - 1){
                res.push_back(i);
            }
            memset(check,true,sizeof(check));
        }
        else{
            check[i] = false;
            if(BFS(2) != n - 1){
                res.push_back(i);
            }
            memset(check,true,sizeof(check));
        }
    }
}

void solution(){
    faster();
    int t;
    cin >> t;
    while(t--){
        init();
        dinh_tru();
        for(int i = 0;i < res.size();i++){
            cout << res[i] << " ";
        }
        cout << endl;
    }
}

int main(){
    solution();
    return 0;
}