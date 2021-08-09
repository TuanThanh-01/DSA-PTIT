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

void xu_ly(vector<long long> a,long long k){
    sort(a.begin(),a.end());
    reverse(a.begin(),a.end());
    for(int i = 0;i < k;i++){
        cout << a[i] << " ";
    }
}

void solution(){
    faster();
    int t;
    cin >> t;
    while(t--){
        long long n,k;
        cin >> n >> k;
        vector<long long> a(n);
        nhap(a);
        xu_ly(a,k);
        cout << endl;
    }
}

int main(){
    solution();
    return 0;
}