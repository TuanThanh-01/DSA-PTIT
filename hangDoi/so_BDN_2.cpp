#include<bits/stdc++.h>
using namespace std;

void faster(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void xu_ly(int n){
    queue<long long> q;
    q.push(1);
    while(true){
        long long tmp = q.front();q.pop();
        if(tmp % n == 0){
            cout << tmp;
            return;
        }
        q.push(tmp * 10);
        q.push(tmp * 10 + 1);
    }
}

void solution(){
    faster();
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        xu_ly(n);
        cout << endl;
    }
}

int main(){
    solution();
    return 0;
}