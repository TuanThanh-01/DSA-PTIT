#include<bits/stdc++.h>
using namespace std;
long long modulo = 1000000007;

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

void xu_ly(vector<long long> &a){
    sort(a.begin(),a.end());
    long long res = 0;
    for(int i = 0;i < a.size();i++){
        res = ((res % modulo) + ((a[i] * i) % modulo)) % modulo;
    }
    cout << res << endl;
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

int main() {
    solution();
    return 0;
}