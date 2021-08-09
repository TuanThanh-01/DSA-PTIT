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

void xu_ly(vector<long long> a){
//biến max_sum để ghi nhận kết quả lớn nhất của dãy con liên tiếp
    long long sum = 0, max_sum = 0;
    for(int i = 0;i < a.size();i++){
        sum += a[i];// duyệt từng phần tử
        if(a[i] > sum){// nếu phần tử trong dãy lớn hơn tổng thì gán nó bằng tổng
            sum = a[i];
        }
        max_sum = max(max_sum,sum);
    }
    cout << max_sum << endl;
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