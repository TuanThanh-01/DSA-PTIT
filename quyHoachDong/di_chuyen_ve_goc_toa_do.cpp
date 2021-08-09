#include<bits/stdc++.h>
using namespace std;
long long F[30][30];
void faster(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solution(){
    faster();
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        memset(F,0,sizeof(F));
        for(int i = 1;i <= 25;i++){
            F[0][i] = 1;
            F[i][0] = 1;
        }
        for(int i = 1;i <= 25;i++){
            for(int j = 1;j <= 25;j++){
                F[i][j] = F[i-1][j] + F[i][j-1];
            }
        }
        cout << F[n][m] << endl;
    }
}

int main(){
    solution();
    return 0;
}