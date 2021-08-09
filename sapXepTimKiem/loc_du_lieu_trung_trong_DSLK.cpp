#include<bits/stdc++.h>
using namespace std;
// dùng mảng đánh dấu để in ra các phần tử trùng
void faster(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void nhap(vector<int> &arr){
    vector<int>:: iterator it;
    for(it = arr.begin();it != arr.end();it++){
        cin >> *it;
    }
}

void solution(){
    faster();
    int n;
    cin >> n;
    vector<int> arr(n);
    nhap(arr);
    int d[100005];
    for(int i = 0;i < arr.size();i++){
        d[arr[i]]++;
    }
    for(int i = 0;i < arr.size();i++){
// kiểm tra phần tử trong mảng đánh dấu khác 0 thì in phần tử ý ra rồi gắn mảng đánh dấu tại phần tử đó = 0
        if(d[arr[i]] != 0){
            cout << arr[i] << " ";
            d[arr[i]] = 0;
        }
    }
    cout << endl;
}

int main(){
    solution();
    return 0;
}