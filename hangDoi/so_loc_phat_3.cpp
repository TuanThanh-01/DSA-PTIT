#include<bits/stdc++.h>
using namespace std;

void faster(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void xu_ly(int n){
    queue<long long> q;
    q.push(6);
    q.push(8);
    vector<long long> arr;
    while(q.front() < pow(10,n)){
        long long tmp = q.front();q.pop();
        arr.push_back(tmp);
        q.push(10 * tmp + 6);
        q.push(10 * tmp + 8);
    }
    cout << arr.size() << endl;
    reverse(arr.begin(),arr.end());
    for(int i = 0;i < arr.size();i++){
        cout << arr[i] << " ";
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