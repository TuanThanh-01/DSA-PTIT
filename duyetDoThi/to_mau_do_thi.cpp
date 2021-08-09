#include<bits/stdc++.h>
using namespace std;
vector<int> arr[1005];
int n,m,M, Paint[1005];

void faster(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void init(){
    for(int i = 1;i <= 1005;i++){
        arr[i].clear();
    }
    cin >> n >> m >> M;
    for(int i = 1;i <= m;i++){
        int u,v;
        cin >> u >> v;
        arr[u].push_back(v);
        arr[v].push_back(u);
    }
    memset(Paint, 0, sizeof(Paint));
}

bool check_trung_mau(int i, int mau){
    for(int j = 0;j < arr[i].size();j++){
        if(Paint[arr[i][j]] == mau){
            return false;// bị trùng màu
        }
    }
    return true;// không bị trùng màu
}

bool to_mau(){
    int vi_tri_da_to = 0;
    int mau_da_to = 0;
    while(vi_tri_da_to != n){
        mau_da_to++;// tăng số màu đã tô lên(đánh dấu các đỉnh nhiều nhất có thể)
        // lặp qua các đỉnh
        for(int i = 1;i <= n;i++){
    // kiểm tra nếu đỉnh đó chưa tô màu và màu đó k trùng với màu của các đỉnh liền kề
            if(check_trung_mau(i, mau_da_to) == true && Paint[i] == 0){ 
                Paint[i] = mau_da_to;// gắn màu cho đỉnh đó
                vi_tri_da_to++;// tăng vị trí đã tô lên
            }
        }
    }
    // nếu số màu đã tô nhỏ hơn số màu đã cho trả về true
    if(mau_da_to <= M){
        return true;
    }
    return false;
}

void solution(){
    faster();
    int t;
    cin >> t;
    while(t--){
        init();
    // nếu có lớn hơn 4 màu thì in ra Yes
        if(to_mau() == true || M >= 4){
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