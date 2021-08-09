#include<bits/stdc++.h>
using namespace std;
long long F[15],kq;
/*
ví dụ test: 1234
ban đầu khởi tạo F[0] = 1, kq = 1;
vòng lặp 1: F[1] = 14, kq = 15
vòng lặp 2: F[2] = 149, kq = 164
vòng lặp 3: F[3] = 1506, kq = 1670
*/
void faster(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

long long tinh_tong(string s){
    F[0] = s[0] - '0';
    kq = F[0];
    for(int i = 1;i < s.size();i++){
        int tmp = s[i] - '0';
        F[i] = F[i - 1] * 10 + tmp * (i + 1);
        kq += F[i];
    }
    return kq;
}

void solution(){
    faster();
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        memset(F,0,sizeof(F));
        kq = 0;
        cout << tinh_tong(s) << endl;
    }
}

int main(){
    solution();
    return 0;
}