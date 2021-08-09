#include<bits/stdc++.h>
using namespace std;
/*ý tưởng: sắp xếp theo thứ tự tăng dần sau đó so sánh nếu hiệu 2 phần tử liên tiếp > 1
thì tăng biến đếm lên bằng hiệu 2 phần tử đó - 1*/
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

long long xu_ly(vector<long long> a){
    long long count = 0;
    for(int i = 0;i < a.size() - 1;i++){
        if(a[i + 1] - a[i] > 1){
            count += a[i + 1] - a[i] - 1;
        }
    }
    return count;
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
        sort(a.begin(),a.end());
        cout << xu_ly(a) << endl;
    }
}

int main(){
    solution();
    return 0;
}