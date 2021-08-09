#include<bits/stdc++.h>
using namespace std;
long long dp[1005][1005],a[1005],c[1005],n,v;
/*
ý tưởng:
- Nếu không chọn vật thứ i thì dp[i,j] là giá trị lớn nhất có thể chọn trong số các vật {1,2,…,i-1} với
giới hạn trọng lượng là j
=> dp[i][j] = dp[i-1][j]

- Nếu có chọn vật thứ i (phải thỏa điều kiện a[i] ≤ j) thì dp[i,j] bằng giá trị vật thứ i là c[i] cộng 
với giá trị lớn nhất có thể có được bằng cách chọn trong số các vật {1,2,…,i-1} với giới hạn trọng 
lượng j-a[i] tức là về mặt giá trị thu được:
dp[i][j] = max(dp[i-1][j],dp[i-1][j-a[i]]+c[i])
*/
void faster(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void init(){
    cin >> n >> v;
    for(int i = 1;i <= n;i++){
        cin >> a[i];
    }
    for(int j = 1;j <= n;j++){
        cin >> c[j];
    }
}

void QHD(){
    memset(dp,0,sizeof(dp));
    for(int i = 1;i <= n;i++){
        for(int j = 1;j <= v;j++){
            if(a[i] <= j){
                dp[i][j] = max(dp[i-1][j],dp[i-1][j-a[i]] + c[i]);
            }
            else{
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    cout << dp[n][v];
}

void solution(){
    faster();
    int t;
    cin >> t;
    while(t--){
        init();
        QHD();
        cout << endl;
    }
}

int main(){
    solution();
    return 0;
}