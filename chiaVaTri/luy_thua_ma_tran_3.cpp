#include<bits/stdc++.h>
using namespace std;
long long mod = 1e9 + 7,n,k;

void faster(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

struct matran{
    long long h[10][10];
};

matran operator *(matran a,matran b){
    matran res;
    for(int i = 0;i < n;i++){
        for(int j = 0;j < n;j++){
            res.h[i][j] = 0;
            for(int k = 0;k < n;k++){
                res.h[i][j] = (res.h[i][j] + a.h[i][k] * b.h[k][j]) % mod;
            }
        }
    }
    return res;
}

matran luy_thua_ma_tran(matran a,long long k){
    if(k == 1) return a;
    matran x = luy_thua_ma_tran(a,k/2);
    if(k % 2 == 0) return x * x;
    return a * x * x;
}

void solution(){
    faster();
    int t;
    cin >> t;
    while(t--){
        cin >> n >> k;
        matran a;
        for(int i = 0;i < n;i++){
            for(int j = 0;j < n;j++){
                cin >> a.h[i][j];
            }
        }
        a = luy_thua_ma_tran(a,k);
        long long sum = 0;
        for(int i = 0;i < n;i++){
            sum = (sum + a.h[i][n - i - 1]) % mod;
        }
        cout << sum << endl;
    }
}

int main(){
    solution();
    return 0;
}              