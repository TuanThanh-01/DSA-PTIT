#include<bits/stdc++.h>
using namespace std;
vector<int> arr[1005];
int n,m,dem = 0;
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
    dem = 0;
    res.clear();
    for(int i = 1;i <= m;i++){
        int u,v;
        cin >> u >> v;
        arr[u].push_back(v);
        arr[v].push_back(u);
    }
    memset(check,true,sizeof(check));
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

void dinh_tru(){
    for(int i = 1;i <= n;i++){
        if(i != 1){
            check[i] = false;
            if(DFS(1) != n - 1){
                res.push_back(i);
            }
            memset(check,true,sizeof(check));
            dem = 0;
        }
        else{
            check[i] = false;
            if(DFS(2) != n - 1){
                res.push_back(i);
            }
            memset(check,true,sizeof(check));
            dem = 0;
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