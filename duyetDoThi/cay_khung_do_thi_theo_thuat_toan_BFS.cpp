#include<bits/stdc++.h>
using namespace std;
vector<int> arr[1005];
int n,m,k,dem;
bool check[1005];

void faster(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

struct edge{
    int dau,cuoi;
};

edge cay_khung[1005];

void init(){
    for(int i = 1;i <= 1005;i++){
        arr[i].clear();
    }
    cin >> n >> m >> k;
    for(int i = 1;i <= m;i++){
        int u,v;
        cin >> u >> v;
        arr[u].push_back(v);
        arr[v].push_back(u);
    }
    memset(check,true,sizeof(check));
    memset(cay_khung,0,sizeof(cay_khung));
}

void BFS(int u){
    dem = 0;
    queue<int> q;
    q.push(u);
    check[u] = false;
    while(!q.empty()){
        int s = q.front();
        q.pop();
        for(int i = 0;i < arr[s].size();i++){
            if(check[arr[s][i]]){
                q.push(arr[s][i]);
                check[arr[s][i]] = false;
                cay_khung[dem].dau = s;
                cay_khung[dem].cuoi = arr[s][i];
                dem += 1;
            }
        }
    }
}

void solution(){
    int t;
    cin >> t;
    while(t--){
        init();
        BFS(k);
        if(dem != n - 1){
            cout << -1 << endl;
        }
        else{
            for(int i = 0;i < dem;i++){
                cout << cay_khung[i].dau << " " << cay_khung[i].cuoi << endl;
            }
        }
    }
}

int main(){
    solution();
    return 0;
}