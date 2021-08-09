#include<bits/stdc++.h>
using namespace std;
vector<int> arr[1005];
int n,m;
bool check[1005],ktra;

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
        arr[v].push_back(u);
    }
    memset(check,true,sizeof(check));
}

void DFS(int u,int truoc){
    check[u] = false;
    cout << u << " ";
    for(int i = 0;i < arr[u].size();i++){
        int v = arr[u][i];
        if(check[v]){
            DFS(v,u);
        }
// sau khi duyệt qua các đỉnh nếu tập đỉnh liền kề với v khác với đỉnh truoc thì chứng tỏ
// nó tạo nên chu trình
        else if(v != truoc){
            ktra = true;
        }
    }
}

void chu_trinh(){
    ktra = false;
    for(int i = 1;i <= n;i++){
        memset(check,true,sizeof(check));
        DFS(i,0);
        if(ktra == true){
            cout << "YES" << endl;
            return;
        }
    }
    if(ktra == false){
        cout << "NO" << endl;
        return;
    }
}

void solution(){
    faster();
    int t;
    cin >> t;
    while(t--){
        init();
        chu_trinh();
    }
}

int main(){
    solution();
    return 0;
}