#include<bits/stdc++.h>
using namespace std;
vector<int> arr[1005];
int n,m,tr,sau,truoc[1005];
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
    cin >> n >> m >> tr >> sau;
    for(int i = 1;i <= m;i++){
        int u,v;
        cin >> u >> v;
        arr[u].push_back(v);
        arr[v].push_back(u);
    }
    memset(check,true,sizeof(check));
    memset(truoc,0,sizeof(truoc));
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
                q.push(arr[s][i]);
                truoc[arr[s][i]] = s;
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
        init();
        BFS(tr);
        if(truoc[sau] == 0){
            cout << -1 << endl;
        }
        else{
            vector<int> res;
            res.push_back(sau);
            int j = sau;
            while(truoc[j] != tr){
                res.push_back(truoc[j]);
                j = truoc[j];
            }
            res.push_back(tr);
            reverse(res.begin(),res.end());
            for(int i = 0;i < res.size();i++){
                cout << res[i] << " ";
            }
            cout << endl;
        }
    }
}

int main(){
    solution();
    return 0;
}