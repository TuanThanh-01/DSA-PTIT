#include<bits/stdc++.h>
using namespace std;
int F[1005];
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

int QHD(vector<int> &arr){
    int res = 1;
    for(int i = 0;i < arr.size();i++){
// F[i] là độ dài dãy con dài nhất kết thúcc tại a[i]
        F[i] = 1;// khởi tạo độ dài dãy con tại mỗi vị trí luôn = 1(bằng chính nó)
        for(int j = 0;j < i;j++){
            if(arr[i] > arr[j]){
                F[i] = max(F[i],F[j]+1);
            }
        }
        res = max(res,F[i]);
    }
    return res;
}

void solution(){
    faster();
    int n;
    cin >> n;
    vector<int> arr(n);
    nhap(arr);
    cout << QHD(arr);
}

int main(){
    solution();
    return 0;
}