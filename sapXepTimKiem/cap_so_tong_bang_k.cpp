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

long long xu_ly(vector<long long> a,long long k){
    long long count = 0;
    for(int i = 0;i < a.size() - 1;i++){
        for(int j = i + 1;j < a.size();j++){
            if(a[i] + a[j] == k){
                count++;
            }
        }
    }
    return count;
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
        cout << xu_ly(a,k) << endl;
    }
}

int main(){
    solution();
    return 0;
}