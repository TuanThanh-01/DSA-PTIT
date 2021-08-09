#include<bits/stdc++.h>
using namespace std;
long long mod = 1e9+7,F[1005],a[1005],n,k;
/*
Gọi F[i] là số cách tạo ra số i bằng các số trong mảng A. Lần lượt thử từng số trong mảng A, 
nếu có giá trị A[j] nào đó nhỏ hơn i thì cộng dồn số cách tạo ra số i - A[j] vào F[i]. 
Lặp để cập nhật mảng F. Kết quả của bài toán là F[K].
ví dụ test 1:3 7    1 5 6
F[0] = 1, F[1] = 0 + F[0] = 1, F[2] = 0 + F[1], F[3] = 0 + F[2] = 1, F[4] = 0 + F[3] = 1
F[5] = 0 + F[4] = 1, F[5] = 1 + F[0] = 2 (số 5 có 2 số thỏa mãn là 1,5)
F[6] = 0 + F[5] = 2, F[6] = 2 + F[1] = 3, F[6] = 3 + F[0] = 4 (số 6 có các số 1,5,6 thỏa mãn)
F[7] = 0 + F[6] = 4, F[7] = 4 + F[2] = 5, F[7] = 5 + F[1] = 6 (số 7 có các số 1,5,6 thỏa mãn)
*/

void faster(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void init(){
    cin >> n >> k;
    for(int i = 1;i <= n;i++){
        cin >> a[i];
    }
}

long long QHD(){
    memset(F,0,sizeof(F));
    F[0] = 1;
    for(int i = 1;i <= k;i++){
        for(int j = 1;j <= n;j++){
            if(a[j] <= i){
                F[i] = (F[i] + F[i-a[j]]) % mod;
            }
        }
    }
    return F[k];
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