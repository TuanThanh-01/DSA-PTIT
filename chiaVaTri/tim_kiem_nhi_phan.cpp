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

long long binary_search(vector<long long> a,long long k,long long l,long long r){
    while(l <= r){
        long long mid = (l + r) / 2;
        if(a[mid] == k){
            return mid;
        }
        else if(a[mid] > k){
            r = mid - 1;
        }
        else{
            l = mid + 1;
        }
    }
    return -1;
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
        if(binary_search(a,k,0,a.size() - 1) == -1){
            cout << "NO" << endl;
        }
        else{
            cout << binary_search(a,k,0,a.size() - 1) + 1 << endl;
        }
    }
}

int main(){
    solution();
    return 0;
}