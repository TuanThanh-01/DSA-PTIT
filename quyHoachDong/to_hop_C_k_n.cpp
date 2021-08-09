#include<bits/stdc++.h>
using namespace std;
long long mod = 1e9+7;
long long F[1005][1005],n,k;
/*
công thức tổ hợp:
C(k,n) = C(k,n-1) + C(k-1,n-1);
nếu k = 0 hoặc k = n thì C(k,n) = 1
*/

void faster(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void to_hop(){
    for(int i = 0;i <= 1000;i++){
        for(int j = 0;j <= i;j++){
            if(j == 0 || j == i){
                F[i][j] = 1;
            }
            else{
                F[i][j] = (F[i-1][j-1] + F[i-1][j]) % mod;
            }
        }
    }
}

void solution(){
    faster();
    int t;
    cin >> t;
    while(t--){
        cin >> n >> k;
        to_hop();
        cout << F[n][k] << endl;
    }
}

int main(){
    solution();
    return 0;
}