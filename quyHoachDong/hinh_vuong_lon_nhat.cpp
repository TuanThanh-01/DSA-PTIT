#include<bits/stdc++.h>
using namespace std;
int a[505][505],n,m,F[505][505];
//F[i][j] là kích thức hình vuông lớn nhất ta thu được
void faster(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void init(){
    cin >> n >> m;
    memset(F,0,sizeof(F));
    memset(a,0,sizeof(a));
    for(int i = 1;i <= n;i++){
        for(int j = 1;j <= m;j++){
            cin >> a[i][j];
            F[i][j] = a[i][j];
        }
    }
}

int QHD(){
    int res = 0;
    for(int i = 1;i <= n;i++){
        for(int j = 1;j <= m;j++){
            if(a[i][j] == 1){
/*ta xét điều kiện để thành hình vuông như trong lệnh if bên dưới*/
                if(a[i][j] == a[i][j-1] && a[i][j] == a[i-1][j] && a[i][j] == a[i-1][j-1]){
                    F[i][j] = min(F[i][j-1],min(F[i-1][j],F[i-1][j-1])) + 1;
// phải lấy min vì nếu lấy max thì chưa chắc có thể tạo được hình vuông(vẽ hình để hiểu)
                }
                res = max(res, F[i][j]);
            }
        }
    }
    return res;
}

void solution(){
    faster();
    int t;
    cin >> t;
    while(t--){
        init();
        cout << QHD() << endl;
    }
}

int main(){
    solution();
    return 0;
}