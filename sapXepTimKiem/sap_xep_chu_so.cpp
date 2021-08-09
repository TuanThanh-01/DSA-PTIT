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

void xu_ly(vector<long long> a){
    set<long long> res;
    for(int i = 0;i < a.size();i++){
        while(a[i]){
            res.insert(a[i] % 10);
            a[i] /= 10;
        }
    }
    set<long long>:: iterator it;
    for(it = res.begin();it != res.end();it++){
        cout << *it << " ";
    }
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
        cout << endl;
    }
}

int main(){ 
    solution();
    return 0;
}