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

long long search(vector<long long> a,long long k){
    int index = 0;
    for(int i = 0;i < a.size();i++){
        if(a[i] == k){
            index = i;
            break;
        }
    }
    return index + 1;
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
        cout << search(a,k) << endl;
    }
}

int main(){
    solution();
    return 0;
}