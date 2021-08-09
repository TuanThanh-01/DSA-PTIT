#include<bits/stdc++.h>
using namespace std;
/*ý tưởng: tạo một vòng lặp chạy từ 0 -> kích thước mảng b tìm vị trí khác nhau
nếu không tìm thấy thì vị trí đó nằm ở cuối mảng a*/
void faster(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void nhap(vector<long long> &arr){
    vector<long long>:: iterator it;
    for(it = arr.begin();it != arr.end();it++){
        cin >> *it;
    }
}

void xu_ly(vector<long long> a,vector<long long> b){
    int vi_tri = b.size();
    for(int i = 0;i < b.size();i++){
        if(a[i] != b[i]){
            vi_tri = i;
            break;
        }
    }
    cout << vi_tri + 1 << endl;
}

void solution(){
    faster();
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<long long> a(n);
        vector<long long> b(n - 1);
        nhap(a);
        nhap(b);
        xu_ly(a,b);
    }
}

int main(){
    solution();
    return 0;
}