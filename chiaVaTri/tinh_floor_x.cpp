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

void xu_ly(vector<long long> &a,long long &k){
    int vt = -1;// khởi tạo biến vt ban đầu
    for(int i = 0;i < a.size();i++){
        if(a[i] <= k){
            vt = max(vt,i);// tìm vị trí phần tử lớn nhất nhỏ hơn bằng k
        }
    }
    if(vt == -1){
        cout << vt << endl;
    }
    else{
        cout << vt + 1<< endl;
    }
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
        xu_ly(a,k);
    }
}

int main(){
    solution();
    return 0;
}