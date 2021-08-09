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

void xu_ly(vector<long long> a){
    sort(a.begin(),a.end());
    if(a.size() % 2 != 0){
        for(int i = 0;i < a.size()/2;i++){
            cout << a.at(a.size() - i - 1) << " " << a.at(i) << " ";
        }
        cout << a.at(a.size()/2 + 0.5);
    }
    else{
        for(int i = 0;i < a.size()/2;i++){
            cout << a.at(a.size() - i - 1) << " " << a.at(i) << " ";
        }
    }
}

void solution(){
    faster();
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        vector<long long> a(n);
        nhap(a);
        xu_ly(a);
        cout << endl;
    }
}

int main(){
    solution();
    return 0;
}