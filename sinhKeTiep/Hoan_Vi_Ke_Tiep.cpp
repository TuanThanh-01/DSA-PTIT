#include<bits/stdc++.h>
using namespace std;

void faster() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

void nhap(vector<long long> &a) {
    vector<long long>:: iterator it;
    for(it = a.begin();it != a.end();it++) {
        cin >> *it;
    }
}

void in(vector<long long> a){
    vector<long long>:: iterator it;
    for(it = a.begin();it != a.end();it++) {
        cout << *it << " ";
    }
}

void xu_ly(vector<long long> &a){
    int i = a.size() - 2;
    while(i >= 0 && a[i] > a[i+1]) i--;
    if(i < 0) {
        for(int j = 0;j < a.size();j++) {
            a[j] = j + 1;
        }
    }
    else {
        int k = a.size() - 1;
        while(a[k] < a[i]) {
            k--;
        }
        swap(a[k],a[i]);
        int l = i + 1,r = a.size() - 1;
        while(l <= r) {
            swap(a[l],a[r]);
            l++,r--;
        }
    }
}

void solution() {
    faster();
    int t;
    cin >> t;
    while(t--) {
        long long n;
        cin >> n;
        vector<long long> a(n);
        nhap(a);
        xu_ly(a);
        in(a);
        cout << endl;
    }
}
int main() {
    solution();
    return 0;
}