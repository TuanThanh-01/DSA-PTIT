#include<bits/stdc++.h>
using namespace std;
/*ví dụ tổng các phần tử bằng n
1 số lấy tổ hợp của 1Cn(lấy 1 phần tử trong n phần tử)
2 số lấy tổ hợp của 2Cn(lấy 2 phần tử trong n phần tử)
...
n số lấy tổ hợp của nCn(lấy n phần tử trong n phần tử)
sau đó ta cộng các tổ hợp này lại suy ra được số dãy phần tử thu được là 2^(n-1)
(áp dụng công thức tổng) */
long long mod = 123456789;
void faster(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

long long power(int n,long long k){
    if(k == 1) return n % mod;
    long long x = power(n, k / 2);
    if(k % 2 == 0) return (x * x % mod);
    return n *(x * x % mod) % mod;
}

void solution(){
    faster();
    int t;
    cin >> t;
    while(t--){
        long long k;
        cin >> k;
        cout << power(2,k - 1) << endl;
    }
}

int main(){
    solution();
    return 0;
}