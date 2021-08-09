#include<bits/stdc++.h>
using namespace std;
long long x;
/* stable_sort: là hàm sắp xếp các phần tử bảo đảm thứ tự xuất hiện của chúng,nhận 1 tham số thứ 3
 để so sánh */
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

void in(vector<long long> a){
    vector<long long>:: iterator it;
    for(it = a.begin();it != a.end();it++){
        cout << *it << " ";
    }
}

bool compare(long long a,long long b){
    return abs(x - a) < abs(x - b);
}

void solution(){
    faster();
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n >> x;
        vector<long long> a(n);
        nhap(a);
        stable_sort(a.begin(),a.end(),compare);
        in(a);
        cout << endl;
    }
}

int main(){
    solution();
    return 0;
}