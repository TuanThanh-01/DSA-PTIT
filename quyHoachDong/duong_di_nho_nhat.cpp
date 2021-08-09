#include<bits/stdc++.h>
using namespace std;
/*  L[i][j] luu gia tri duong di nho nhat tu (1,1) den (i,j) 
Vi chi co the di chuyen sang phai, xuong duoi, cheo duoi nen de di duoc toi (i,j) chi co 3 con
duong:
Do la : (i-1,j) -> (i,j) la truong hop di tu tren duong duoi
(i,j-1) -> (i,j) la truong hop di tu phai sang trai
(i-1,j-1) -> (i,j) la truong hop di cheo duoi

=> Duong di co gia tri nho nhat se tim duoc neu xet 3 duong di tren va chon 1 duong di co gia tri
nho nhat
khi do duong co gia tri nho nhat khi di tu 
(1,1) -> (i,j) se la L[i][j] = min (L[i-1][j],L[i][j-1],L[i-1][j-1]) + A[i][j];
*/
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
        int a[n+5][m+5],F[n+5][m+5];
        memset(F,0,sizeof(F));

        for(int i = 1;i <= n;i++){
            for(int j = 1;j <= m;j++){
                cin >> a[i][j];
            }
        }

        for(int i = 1;i <= n;i++){
            for(int j = 1;j <= m;j++){
                if(i == 1 && j == 1){
                    F[i][j] = a[i][j];
                }
                else if(i == 1){
                    F[i][j] = F[i][j - 1] + a[i][j];
                }
                else if(j == 1){
                    F[i][j] = F[i-1][j] + a[i][j];
                }
                else{
                    F[i][j] = min(F[i-1][j],min(F[i-1][j-1],F[i][j-1])) + a[i][j];
                }
            }
        }
        cout << F[n][m] << endl;
    }
}

int main(){
    solution();
    return 0;
}