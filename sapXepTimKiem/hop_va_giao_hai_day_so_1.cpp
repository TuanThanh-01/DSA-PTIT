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

void xu_ly(vector<long long> a,vector<long long> b){
    set<long long> uni;
    vector<long long> inter;
    vector<long long> res;
    vector<long long>:: iterator it;
    for(it = a.begin();it != a.end();it++){
        res.push_back(*it);
    }
    for(it = b.begin();it != b.end();it++){
        res.push_back(*it);
    }  

    sort(res.begin(),res.end());

// tìm và in phần tử mảng giao nhau
    for(int i = 0;i < res.size();i++){
        uni.insert(res.at(i));
    }
    set<long long>:: iterator un;
    for(un = uni.begin();un != uni.end();un++){
        cout << *un << " ";
    }
    cout << endl;
// tìm và in phần tử mảng hợp nhau
    for(int i = 0;i < res.size();i++){
        if(res[i] == res[i+1]){
            inter.push_back(res[i]);
        }
    }
    for(it = inter.begin();it != inter.end();it++){
        cout << *it << " ";
    }
}

void solution(){
    faster();
    int t;
    cin >> t;
    while(t--){
        long long n,m;
        cin >> n >> m;
        vector<long long> a(n);
        vector<long long> b(m);
        nhap(a);
        nhap(b);
        xu_ly(a,b);
        cout << endl;
    }
}

int main(){
    solution();
    return 0;
}