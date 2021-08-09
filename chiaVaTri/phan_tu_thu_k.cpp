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

void xu_ly(vector<long long> a,vector<long long> b,long long k){
    vector<long long> res;
    vector<long long>:: iterator it;
    for(it = a.begin();it != a.end();it++){
        res.push_back(*it);
    }
    for(it = b.begin();it != b.end();it++){
        res.push_back(*it);
    }

    sort(res.begin(),res.end());
    cout << res.at(k - 1) << endl;
}

void solution(){
    faster();
    int t;
    cin >> t;
    while(t--){
        long long n,m,k;
        cin >> n >> m >> k;
        vector<long long> a(n);
        vector<long long> b(m);
        nhap(a);
        nhap(b);
        xu_ly(a,b,k);
    }
}

int main(){
    solution();
    return 0;
}