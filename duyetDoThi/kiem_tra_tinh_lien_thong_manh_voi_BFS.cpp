#include<bits/stdc++.h>
using namespace std;
vector<int> arr[1005];
int n,m;
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
    cin >> n >> m;
    for(int i = 1;i <= m;i++){
        int u,v;
        cin >> u >> v;
        arr[u].push_back(v);
    }
    memset(check,true,sizeof(check));
}

int BFS(int u){
    int dem = 0;
    queue<int> q;
    q.push(u);
    check[u] = false;
    while(!q.empty()){
        int s = q.front();
        dem++;
        q.pop();
        for(int i = 0;i < arr[s].size();i++){
            if(check[arr[s][i]]){
                q.push(arr[s][i]);
                check[arr[s][i]] = false;
            }
        }
    }
    return dem;
}

bool KT_lien_thong(){
    for(int i = 1;i <= n;i++){
        if(BFS(i) != n){
            return false;
            break;
        }
        memset(check,true,sizeof(check));
    }
    return true;
}

void solution(){
    faster();
    int t;
    cin >> t;
    while(t--){
        init();
        if(KT_lien_thong() == true){
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