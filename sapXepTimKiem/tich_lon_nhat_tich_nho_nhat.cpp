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

void solution(){
    faster();
    int t;
    cin >> t;
    while(t--){
        long long n,m;
        cin >> n >> m;
        vector<long long> a(n);
        vector<long long> b(m);
        nhap(a);
        nhap(b);
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        cout << a.at(a.size() - 1) * b.at(0) << endl;
    }
}

int main(){
    solution();
    return 0;
}