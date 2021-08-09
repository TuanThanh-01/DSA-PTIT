#include<bits/stdc++.h>
using namespace std;

void faster(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void xu_ly(long long n){
    queue<long long> q;
    vector<long long> arr;
    q.push(1);
    while(true){
        long long tmp = q.front();q.pop();
        if(tmp > n){
            break;
        }
        arr.push_back(tmp);
        q.push(tmp * 10);
        q.push(tmp * 10 + 1);
    }
    cout << arr.size();
}

void solution(){
    faster();
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        xu_ly(n);
        cout << endl;
    }
}

int main(){
    solution();
    return 0;
}