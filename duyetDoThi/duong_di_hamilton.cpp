#include<bits/stdc++.h>
using namespace std;
vector<int> arr[1005];
bool chuaxet[1005];
int n,m,check;

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
    check = false;
    for(int i = 1;i <= m;i++){
        int u,v;
        cin >> u >> v;
        arr[u].push_back(v);
        arr[v].push_back(u);
    }
    memset(chuaxet, true, sizeof(chuaxet));
}

void Try(int u, int i){
    if(i == n){
        check = true;
        return;
    }
    for(int j = 0;j < arr[u].size();j++){
        if(chuaxet[arr[u][j]]){
            chuaxet[arr[u][j]] = false;
            Try(arr[u][j], i + 1);
            chuaxet[arr[u][j]] = true;
        }
    }
}

void solution(){
    faster();
    int t;
    cin >> t;
    while(t--){
        init();
        for(int i = 1;i <= n;i++){
            chuaxet[i] = false;
            Try(i, 1);
            chuaxet[i] = true;
        }
        if(check == true){
            cout << 1 << endl;
        }
        else{
            cout << 0 << endl;
        }
    }
}

int main(){
    solution();
    return 0;
}