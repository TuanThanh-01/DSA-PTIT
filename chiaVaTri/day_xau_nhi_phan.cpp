#include<bits/stdc++.h>
using namespace std;
long long P[100];// mảng lưu độ dài của xâu nhị phân
/*ý tưởng: vì xâu có công thức F(n) = F(n-2) + F(n-1) nên F(n) được tạo bởi F(n-2) và F(n-1)
dựa vào đó ta xét nếu k <= F(n-2) thì nó sẽ nằm ở trong đoạn F(n-2) và ngược lại nó sẽ nằm trong
đoạn F(n-1). sử dụng chia để trị để chia thành từng khoảng nhỏ đến khi nó nó trả về 0 hoặc 1 */
void faster(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

char de_quy(int n,long long k){
    if(n == 1) return '0';
    if(n == 2) return '1';
    if(k <= P[n-2]) return de_quy(n-2,k);
    return de_quy(n-1,k-P[n-2]);
}

void solution(){
    faster();
    int t;
    cin >> t;
    while(t--){
        P[1] = 1;
        P[2] = 1;
        for(int i = 3;i < 93;i++){
            P[i] = P[i-2] + P[i-1];
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