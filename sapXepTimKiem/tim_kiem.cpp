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

bool tim_kiem(vector<long long> a,long long k,long long left,long long right){
    while(left <= right){
        long long mid = (left + right) / 2;
        if(a[mid] == k){
            return true;
        }
        else if(a[mid] > k){
            right = mid - 1;
        }
        else{
            left = mid + 1;
        }
    }
    return false;
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
        if(tim_kiem(a,k,0,a.size() - 1) == true){
            cout << 1 << endl;
        }
        else{
            cout << -1 << endl;
        }
    }
}

int main(){
    solution();
    return 0;
}