#include<bits/stdc++.h>
using namespace std;
int a[100][100],b[100],res;
bool chuaXet[100],Nguoc[100],Xuoi[100];

void faster(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void nhap(){
    for(int i = 1;i <= 8;i++){
        for(int j = 1;j <= 8;j++){
            cin >> a[i][j];
        }
    }
}

void Try(int i){
    for(int j = 1;j <= 8;j++){
        if(chuaXet[j] && Xuoi[i+j-1] && Nguoc[i-j+8]){
            b[i] = j;// lấy giá trị của cột
            chuaXet[j] = Xuoi[i+j-1] = Nguoc[i-j+8] = false;
            if(i == 8){
                int sum = 0;
                for(int k = 1;k <= 8;k++){
                    sum += a[k][b[k]];// b[k] là vị trí cột thỏa mãn sắp xếp quân hậu không bị ăn
                }
                res = max(res,sum);
            }
            else Try(i+1);
            chuaXet[j] = Xuoi[i+j-1] = Nguoc[i-j+8] = true;
        }
    }
}

void solution(){
    faster();
    int t;
    cin >> t;
    while(t--){
        res = 0;
        nhap();
        for(int i = 1;i <= 8;i++){
            chuaXet[i] = true;
        }
        for(int i = 1;i < 17;i++){
            Xuoi[i] = Nguoc[i] = true;
        }
        Try(1);
        cout << res << endl;
    }
}

int main(){
    solution();
    return 0;
}