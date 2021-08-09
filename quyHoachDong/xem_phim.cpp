#include<bits/stdc++.h>
using namespace std;
long long dp[105][20005],a[105],n,c;
/*
dp[N][C] la khoi luong bo lon nhat co trong gioi han c (trong n con bo dau tien)
dp[i][j] la khoi luong bo lon nhat co the mang di trong gioi han j (trong i con bo dau tien)
dp[i][j] = max (dp[i][j],dp[i-1][j-a[i]] + a[i]);
*/
void faster(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void init(){
    cin >> c >> n;
    for(int i = 1;i <= n;i++){
        cin >> a[i];
    }
}

void QHD(){
    memset(dp,0,sizeof(dp));
    for(int i = 1;i <= n;i++){
        for(int j = 1;j <= c;j++){
            dp[i][j] = dp[i-1][j];
            if(a[i] <= j){
                dp[i][j] = max(dp[i-1][j],dp[i-1][j-a[i]] + a[i]);
            }
        }
    }
    cout << dp[n][c];
}

void solution(){
    faster();
    init();
    QHD();
    cout << endl;
}

int main(){
    solution();
    return 0;
}