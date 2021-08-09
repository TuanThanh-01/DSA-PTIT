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
// tạo struct để lưu cạnh
struct egde{
    int dau,cuoi;
};

egde cay_khung[1005];

// khởi tạo
void init(){
    for(int i = 1;i <= 1005;i++){
        arr[i].clear();
    }
    dem = 1;
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


void DFS(int u){
    check[u] = false;
    for(int i = 0;i < arr[u].size();i++){
        if(check[arr[u][i]]){
            cay_khung[dem].dau = u;
            cay_khung[dem].cuoi = arr[u][i];
            dem += 1;
            DFS(arr[u][i]);
        }
    }
}

void solution(){
    faster();
    int t;
    cin >> t;
    while(t--){
        init();
        DFS(k);
        // kiểm tra biến đếm nếu không bằng số cạnh thì in ra -1
        if(dem != n){
            cout << -1 << endl;
        }
        else{
            for(int i = 1;i <= dem - 1;i++){
                cout << cay_khung[i].dau << " " << cay_khung[i].cuoi << endl;
            }
        }
    }
}

int main(){
    solution();
    return 0;
}