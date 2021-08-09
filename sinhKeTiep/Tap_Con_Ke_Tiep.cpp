#include<bits/stdc++.h>
using namespace std;

void faster() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

void nhap_mang(vector<long long> &a) {
    vector<long long>:: iterator it;
    for(it = a.begin();it != a.end();it++) {
        cin >> *it;
    }
}

void in(vector<long long> a) {
    vector<long long>:: iterator it;
    for(it = a.begin();it != a.end();it++){
        cout << *it << " ";
    }
}

void xu_ly(vector<long long> &a, int n) {
    int i = a.size() - 1;
    while(i >= 0 && a[i] == n + i - a.size() + 1){// tìm phần tử không thỏa dk a[i] = n - k + i;
        i--;
    }
    if(i >= 0) {
        a[i]++;
        for(int j = i + 1;j < a.size();j++) {
            a[j] = a[i] + j - i;
        }
    }
    else { // nếu là cấu hình cuối thì lặp lại từ đầu
        for(int j = 0;j < a.size();j++) {
            a[j] = j + 1;
        }
    }
}

void solution() {
    faster();
    int t;
    cin >> t;
    while(t--) {
        long long n,k;
        cin >> n >> k;
        vector<long long> a(k);
        nhap_mang(a);
        xu_ly(a,n);
        in(a);
        cout << endl;
    }
}

int main() {
    solution();
    return 0;
}