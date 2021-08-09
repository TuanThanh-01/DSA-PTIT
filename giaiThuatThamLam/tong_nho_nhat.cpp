#include<bits/stdc++.h>
using namespace std;

void faster(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

void nhap(vector<long long> &a){
    vector<long long>:: iterator it;
    for(it = a.begin();it != a.end();it++){
        cin >> *it;
    }
}
/*ý tưởng: sắp xếp mảng tăng dần, tạo 2 biến nếu tại vị trị i chia hết cho 2 cộng vào 1 biến vị trí
không chia hết cho 2 cộng vào một biến rồi cộng tổng lại ra kết quả
ví dụ: 1 2 3 4 5
suy ra ta có: sum1 = 135, sum2 = 24 vậy tổng nhỏ nhất ta thu đc là 159*/
void xu_ly(vector<long long> a){
    sort(a.begin(),a.end());
    long long sum1 = 0,sum2 = 0;
    for(int i = 0;i < a.size();i++){
        if(i % 2 == 0){
            sum1 = (sum1 * 10) + a[i];
        }
        else{
            sum2 = (sum2 * 10) + a[i];
        }
    }
    cout << sum1 + sum2 << endl;
}

void solution(){
    faster();
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        vector<long long> a(n);
        nhap(a);
        xu_ly(a);
    }
}

int main(){
    solution();
    return 0;
}