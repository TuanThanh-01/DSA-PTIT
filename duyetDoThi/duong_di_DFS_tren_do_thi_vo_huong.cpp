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

void init(){
    cin >> n >> m >> t >> s;
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
    memset(truoc,0,sizeof(truoc));
}

void DFS(int u){
    check[u] = false;
    for(int i = 0;i < arr[u].size();i++){
        if(check[arr[u][i]] == true){
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
        init();
        DFS(t);
        if(truoc[s] == 0){
            cout << -1 << endl;
        }
        else{
            vector<int> res;
            int j = s;
            res.push_back(s);
            while(truoc[j] != t){
                res.push_back(truoc[j]);
                j = truoc[j];
            }
            res.push_back(t);
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