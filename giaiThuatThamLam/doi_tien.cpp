#include<bits/stdc++.h>
using namespace std;
int a[100] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
int k = 10;
void faster(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

long long xu_ly(int a[100],long long n){
    long long res = 0;
    for(int i = k - 1;i >= 0;i--) {
        res += n / a[i];// đếm số tờ tiền bằng cách lấy số tiền chia cho phần tử trong mảng
        n %= a[i];// lấy kết quả sau khi đổi tiền thứ
    }
    return res;
}

void solution() {
    faster();
    int t;
    cin >> t;
    while(t--) {
        long long n;
        cin >> n;
        cout << xu_ly(a,n) << endl;
    }
}

int main() {
    solution();
    return 0;
}