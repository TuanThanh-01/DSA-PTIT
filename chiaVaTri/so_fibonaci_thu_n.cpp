#include<bits/stdc++.h>
using namespace std;
long M = 1e9 + 7;
void faster(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
// ta sử dụng cách tính ma trận để tính số fibonaci thứ n(xem slide chia để trị có công thức)

struct ma_tran_fibo{
    long long f[5][5];
};
// khởi tạo phép nhân giữa hai ma trận
ma_tran_fibo operator *(ma_tran_fibo a,ma_tran_fibo b){
    ma_tran_fibo kq;
    kq.f[0][0] = (a.f[0][0] * b.f[0][0]%M + a.f[0][1] * b.f[1][0]%M)%M;
	kq.f[0][1] = (a.f[0][0] * b.f[0][1]%M + a.f[0][1] * b.f[1][1]%M)%M;
	kq.f[1][0] = (a.f[1][0] * b.f[0][0]%M + a.f[1][1] * b.f[1][0]%M)%M;
	kq.f[1][1] = (a.f[1][0] * b.f[0][1]%M + a.f[1][1] * b.f[1][1]%M)%M;
    return kq;
}

/*vì ta sử dụng ma trận để tính số fibonacci thứ n nên số fibonacci thứ n sẽ trùng với phần tử
f[1][1] của ma trận mũ n-1*/
ma_tran_fibo fibo_thu_n(ma_tran_fibo a,long long n){
    if(n == 1) return a;
    ma_tran_fibo x = fibo_thu_n(a,n/2);
    if(n % 2 == 0) return x*x;
    return a*x*x;
} 

void solution(){
    faster();
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        ma_tran_fibo a;
        a.f[0][0] = 0;
        a.f[0][1] = 1;
        a.f[1][0] = 1;
        a.f[1][1] = 1;
        a = fibo_thu_n(a,n - 1);
        cout << a.f[1][1] << endl;
    }   
}

int main(){
    solution();
    return 0;
}