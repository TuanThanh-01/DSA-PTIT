#include<bits/stdc++.h>
using namespace std;
/*ý tưởng: sắp xếp mảng sau đó chia thành hai trường hợp
trường hợp 1: tính tổng giá trị mảng từ 0 -> k và từ k -> n sau đó lấy trị tuyệt đối hiệu 2 tổng
trường hợp 2: tính tổng giá trị mảng từ 0 -> n-k và từ n-k > n sau đó lấy trị tuyệt đối hiệu 2 tổng
lấy giá trị lớn nhất của hiệu 2 tổng sẽ được thu được kết quả*/
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

void xu_ly(vector<int> arr,int k){
    sort(arr.begin(),arr.end());
    int sum1 = 0,sum2 = 0,res = 0;
    for(int i = 0;i < arr.size();i++){
        if(i < k){
            sum1 += arr[i];
        }
        else{
            sum2 += arr[i];
        }
    }
    res = abs(sum2 - sum1);
    sum1 = sum2 = 0;
    for(int i = 0;i < arr.size();i++){
        if(i < arr.size() - k){
            sum1 += arr[i];
        }
        else{
            sum2 += arr[i];
        }
    }
    res = max(res,abs(sum2 - sum1));
    cout << res << endl;
}

void solution(){
    faster();
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        vector<int> arr(n);
        nhap(arr);
        xu_ly(arr,k);
    }
}

int main(){
    solution();
    return 0;
}