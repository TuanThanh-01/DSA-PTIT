#include<bits/stdc++.h>
using namespace std;
long long F[100];
/*ý tưởng: vì xâu fibonaci có công thức F(n) = F(n-2) + F(n-1) nên F(n) được tạo bởi F(n-2) và F(n-1)
dựa vào đó ta xét nếu k < F(n-2) thì nó sẽ nằm ở trong đoạn F(n-2) và ngược lại nó sẽ nằm trong
đoạn F(n-1). sử dụng chia để trị để chia thành từng khoảng nhỏ đến khi nó nó trả về A hoặc B */
void faster(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

char de_quy(int n,long long k){
    if(n == 1) return 'A';
    if(n == 2) return 'B';
    if(k <= F[n-2]) return de_quy(n-2,k);
    return de_quy(n-1,k - F[n-2]);
}

void solution(){
    faster();
    int t;
    cin >> t;
    while(t--){
        F[1] = 1;
        F[2] = 1;
        for(int i = 3;i <= 92;i++){
            F[i] = F[i-2] + F[i-1];
        }
        int n;
        long long k;
        cin >> n >> k;
        cout << de_quy(n,k) << endl;
    }
}

int main(){
    solution();
    return 0;
}