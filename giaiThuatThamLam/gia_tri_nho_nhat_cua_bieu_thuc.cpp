#include<bits/stdc++.h>
using namespace std;

void faster(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void nhap(vector<long long> &arr){
    vector<long long>:: iterator it;
    for(it = arr.begin();it != arr.end();it++){
        cin >> *it;
    }
}

long long xu_ly(vector<long long> a,vector<long long> b){
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    reverse(a.begin(),a.end());
    long long sum = 0;
    for(int i = 0;i < a.size();i++){
        sum += a[i] * b[i];
    }
    return sum;
}

void solution(){
    faster();
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        vector<long long> a(n);
        vector<long long> b(n);
        nhap(a);
        nhap(b);
        cout << xu_ly(a,b) << endl;
    }
}

int main(){
    solution();
    return 0;   
}