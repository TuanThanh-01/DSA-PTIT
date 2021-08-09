#include<bits/stdc++.h>
using namespace std;
int tang[1005],giam[1005],n,a[1005];
/*
- Dãy con tăng dài nhất đến vị trí i 
- Dãy con giảm dài nhất từ vị trí i+1 đến n-1
Lưu trữ vào hai mảng tang[] và giam[] tổng các phần tử của dãy xác định được. 
Kết quả là giá trị max của tổng 2 dãy trên tại vị trí i trừ đi a[i]
*/
void faster(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void init(){
    cin >> n;
    for(int i = 0;i < n;i++){
        cin >> a[i];
        tang[i] = giam[i] = a[i];
    }
}

void xu_ly(){
    int sum,res;
    for(int i = 1;i < n;i++){
        sum = 0;
        for(int j = i - 1;j >= 0;j--){
            if(a[i] > a[j]){
                sum = max(sum,tang[j]);
            }
        }
        tang[i] += sum;
    }

    for(int i = n - 2;i >= 0;i--){
        sum = 0;
        for(int j = i + 1;j < n;j++){
            if(a[i] > a[j]){
                sum = max(sum,giam[j]);
            }
        }
        giam[i] += sum;
    }
    res = 0;
    for(int i = 0;i < n;i++){
        res = max(res,giam[i] + tang[i] - a[i]);
    }
    cout << res << endl;
}

void solution(){
    faster();
    int t;
    cin >> t;
    while(t--){
        init();
        xu_ly();
    }
}

int main(){
    solution();
    return 0;
}