#include<bits/stdc++.h>
using namespace std;
int F[1005],n;
/* ý tưởng: tìm dãy con tăng dài nhất sau đó lấy n - dãy con tăng dài nhất ra số lần phải thực hiện
sắp xếp */
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

int day_con_tang_dai_nhat(vector<int> &arr){
    int res = 1;//biến khai báo độ dài dãy con tăng dài nhất
    for(int i = 0;i < arr.size();i++){
        F[i] = 1;
        for(int j = 0;j < i;j++){
// lấy đk >= vì nếu dãy có tất cả các phần tử đều giống nhau thì không cần sắp xếp(kq trả về 0)
            if(arr[i] >= arr[j]){
                F[i] = max(F[i],F[j] + 1);
            }
        }
        res = max(res,F[i]);
    }
    return res;
}

void solution(){
    faster();
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        vector<int> arr(n);
        nhap(arr);
        cout << arr.size() - day_con_tang_dai_nhat(arr) << endl;
    }
}

int main(){
    solution();
    return 0;
}