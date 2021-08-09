#include<bits/stdc++.h>
using namespace std;
vector<int> arr[1005];
int n,m;
/*ý tưởng: đồ thị có chu trình euler khi tổng các đỉnh trong danh sách kề là 1 số chia hết cho hai
đồ thị có đường đi euler khi có 2 đỉnh trong đó có các đỉnh liền kề lẻ */
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
}

int duong_di_chu_trinh(){
    int count = 0;
    for(int i = 1;i <= n;i++){
        if(arr[i].size() % 2 != 0){
            count++;
        }
    }
    if(count == 0){
        return 2;// có chu trình euler
    }
    if(count == 2){
        return 1;// có đường đi euler
    }
    return 0;
}

void solution(){
    faster();
    int t;
    cin >> t;
    while(t--){
        init();
        cout << duong_di_chu_trinh() << endl;
    }
}

int main(){
    solution();
    return 0;
}