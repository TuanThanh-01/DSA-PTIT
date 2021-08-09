#include<bits/stdc++.h>
using namespace std;
/*ý tưởng: sắp xếp mảng sau đó chia mảng làm 2 sau đó tìm các phần tử 2*a[i] < a[j]
đếm các phần tử đó rồi lưu vào biến count sau đó lấy số lượng phần tử trong mảng trừ đi count
ra kết quả*/
void faster(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void nhap(vector<int> &arr){
    vector<int>::iterator it;
    for(it = arr.begin();it != arr.end();it++){
        cin >> *it;
    }
}

void xu_ly(vector<int> &arr,int left,int right){
    sort(arr.begin(),arr.end());
    int mid = (left+right)/2;
    int count = 0,i = 0,j = mid+1;
    while(i <= mid && j < arr.size()){
        if((arr[i] * 2) <= arr[j]){// kiểm tra điều kiện
            count++,i++,j--;
        }
        else j++;// nếu 2 lần a[i] không nhỏ hơn a[j] thì tăng biến j lên 1 để ktra số tiếp theo
    }
    cout << arr.size() - count << endl;
}

void solution(){
    faster();
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        nhap(arr);
        xu_ly(arr,0,arr.size() - 1);
    }
}

int main(){
    solution();
    return 0;
}