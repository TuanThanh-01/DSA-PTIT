#include<bits/stdc++.h>
using namespace std;
int a[100],n,dem;
bool Xuoi[100],Nguoc[100],chuaXet[100];

void faster(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void Try(int i){
    for(int j = 1;j <= n;j++){
        if(chuaXet[j] && Xuoi[i+j-1] && Nguoc[i-j+n]){
            a[i] = j;
            chuaXet[j] = Xuoi[i+j-1] = Nguoc[i-j+n] = false;
            if(i == n){
                dem++;
            }
            else Try(i+1);
            chuaXet[j] = Xuoi[i+j-1] = Nguoc[i-j+n] = true; 
        }
    }
}

void solution(){
    faster();
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        dem = 0;
        for(int i = 1;i <= n;i++){
            chuaXet[i] = true;
        }
        for(int i = 1;i < 2*n;i++){
            Xuoi[i] = true;
            Nguoc[i] = true;
        }
        Try(1);
        cout << dem << endl;
    }
}

int main(){
    solution();
    return 0;
}