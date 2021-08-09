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

void xu_ly(vector<long long> a,vector<long long> b){
    vector<long long> res;
    for(int i = 0;i < a.size();i++){
        res.push_back(a[i]);
    }
    for(int j = 0;j < b.size();j++){
        res.push_back(b[j]);
    }
    sort(res.begin(),res.end());
    vector<long long>:: iterator it;
    for(it = res.begin();it != res.end();it++){
        cout << *it << " ";
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
        xu_ly(a,b);
        cout << endl;
    }
}

int main(){
    solution();
    return 0;
}