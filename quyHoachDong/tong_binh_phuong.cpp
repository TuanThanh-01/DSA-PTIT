#include<bits/stdc++.h>
using namespace std;
long long F[10005],n;
//F[n] là số lượng ít nhất các chữ số nhỏ hơn nó có tổng bình phương các chữ số đó bằng n
void faster(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

long long QHD(){
    memset(F,0,sizeof(F));
    for(int i = 1;i <= n;i++){
        F[i] = i;
        for(int j = 1;j <= sqrt(i);j++){
// ta có số i bằng số i - j^2 + j^2 nên F[i] = min(F[i],F[i-j*j]) + 1 với 1 tương ứng là số j^2
            F[i] = min(F[i], F[i-j*j] + 1);
        }
    }
    return F[n];
}

void solution(){
    faster();
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        cout << QHD() << endl;
    }
}

int main(){
    solution();
    return 0;
}