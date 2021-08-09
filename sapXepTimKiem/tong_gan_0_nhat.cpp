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
    long long max_sum = -100000000;
    for(int i = 0;i < a.size();i++){
        for(int j = i + 1;j < a.size();j++){
            // kiểm tra điều kiện xem trị tuyệt đối 2 số gần 0 nhất thì in ra
            if(abs(a.at(i) + a.at(j)) < abs(max_sum)){
                max_sum = a.at(i) + a.at(j);
            }
        }
    }
    cout << max_sum << endl;
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
    }
}

int main(){
    solution();
    return 0;
}