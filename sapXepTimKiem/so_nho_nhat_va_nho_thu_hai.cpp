#include<bits/stdc++.h>
using namespace std;

void faster(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void nhap(vector<int> &a){
    vector<int>:: iterator it;
    for(it = a.begin();it != a.end();it++){
        cin >> *it;
    }
}

void xu_ly(vector<int> a){
    sort(a.begin(),a.end());
    if(a.at(0) == a.at(1)){
        cout << -1 << endl;
    }
    else{
        cout << a.at(0) << " " << a.at(1) << endl;
    }
}

void solution(){
    faster();
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        nhap(a);
        xu_ly(a);
    }
}

int main(){
    solution();
    return 0;
}