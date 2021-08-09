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
        long long n,k;
        cin >> n >> k;
        long long count = 0;
        vector<long long> a(n);
        nhap(a);
        for(int i = 0;i < a.size();i++){
            if(a[i] == k){
                count++;
            }
        }
        if(count == 0){
            cout << -1 << endl;
        }
        else{
            cout << count << endl;
        }
    }
}

int main(){
    solution();
    return 0;
}