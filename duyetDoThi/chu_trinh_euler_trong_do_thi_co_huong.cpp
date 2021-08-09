#include<bits/stdc++.h>
using namespace std;
vector<int> arr[1005];
int n,m,a[1005][1005];
// đồ thị có hướng có chu trình euler khi tổng bán bậc ra = tổng bán bậc vào hay
// tổng hàng = tổng cột
void faster(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void init(){
    memset(a,0,sizeof(a));
    cin >> n >> m;
    for(int i = 1;i <= m;i++){
        int u,v;
        cin >> u >> v;
        a[u][v] = 1;
    }
}

int tong_hang(int i){
    int sum = 0;
    for(int j = 1;j <= n;j++){
        sum += a[i][j];
    }
    return sum;
}

int tong_cot(int i){
    int sum1 = 0;
    for(int j = 1;j <= n;j++){
        sum1 += a[j][i];
    }
    return sum1;
}

bool check(){
    for(int i = 1;i <= n;i++){
        if(tong_cot(i) != tong_hang(i)){
            return false;
        }
    }
    return true;
}

void solution(){
    faster();
    int t;
    cin >> t;
    while(t--){
        init();
        if(check() == true){
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