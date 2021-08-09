#include<bits/stdc++.h>
using namespace std;
long long F[100005],n,a[100005];
/*
F[i] là tổng lớn nhất của dãy con không kề nhau của dãy A1...An cần tính F[n]
F[i] sẽ bằng F[i-1] hoặc F[i-2]+A[i] để tránh tìm tổng hai dãy con liên tiếp
công thức QHD: 
    F[1] = A[1]
    F[2] = max(F[1], A[2])
    F[i] = max(F[i-1], F[i-2]+A[i]);
*/
void faster(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void init(){
    cin >> n;
    for(int i = 1;i <= n;i++){
        cin >> a[i];
    }
}

void QHD(){
    memset(F,0,sizeof(F));
    F[1] = a[1];
    F[2] = max(a[2],F[1]);
    for(int i = 3;i <= n;i++){
        F[i] = max(F[i-2] + a[i],F[i-1]);
    }
    cout << F[n] << endl;
}

void solution(){
    faster();
    int t;
    cin >> t;
    while(t--){
        init();
        QHD();
    }
}

int main(){
    solution();
    return 0;
}