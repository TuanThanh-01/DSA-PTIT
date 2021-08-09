#include<bits/stdc++.h>
using namespace std;
// áp dụng công thức tính đề bài cho
long long mod = 1e9 + 7;

void faster(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

long long P_n_k(int n,int k){
    if(n < k){
        return 0;
    }
    long long res = 1;
    for(int i = n-k+1;i <= n;i++){
        res = (res * i) % mod;
    }
    return res;
}

void solution(){
    faster();
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        cout << P_n_k(n,k) << endl;
    }
}

int main(){
    solution();
    return 0;
}