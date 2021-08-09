#include<bits/stdc++.h>
using namespace std;
long long mod = 1e9 + 7;
// ý tưởng giống bài nối dây 1
void faster(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void nhap(priority_queue<long long, vector<long long>, greater<long long> > &arr,long long n){
    long long a;
    for(int i = 0;i < n;i++){
        cin >> a;
        arr.push(a);
    }
}

void solution(){
    faster();
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        priority_queue<long long, vector<long long>, greater<long long> > arr;
        nhap(arr,n);
        long long x,y, res = 0;
        while(arr.size() > 1){
            x = arr.top();arr.pop();
            y = arr.top();arr.pop();
            long long kq = (x + y) % mod;
            res += kq;
            res %= mod;
            arr.push(kq);
        }
        cout << res << endl;
    }
}

int main(){
    solution();
    return 0;
}