#include<bits/stdc++.h>
using namespace std;
/*ý tưởng: sử dụng hàng đợi ưu tiên để giải bài toán
ví dụ 4 3 2 6 
bước 1:2 3 4 6 -> 5
bước 2:4 5 6 -> 5 + 9 = 14
bước 3:9 6 -> 14 + 15 = 29(kq cuối)*/
void faster(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void nhap(priority_queue<long, vector<long>,greater<long> > &arr,long n){
    long a;
    for(int i = 0;i < n;i++){
        cin >> a;
        arr.push(a);
    }
}

void solution(){
    faster();
    int t;
    cin >> t;
    while(t--){
        long n;
        cin >> n;
        priority_queue<long, vector<long>, greater<long> > arr;
        nhap(arr,n);
        long x,y,res = 0;
        while(arr.size() > 1){
            x = arr.top(); arr.pop();
            y = arr.top(); arr.pop();
            res += x + y;
            arr.push(x+y);
        }
        cout << res << endl;
    }
}

int main(){
    solution();
    return 0;
}