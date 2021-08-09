#include<bits/stdc++.h>
using namespace std;
long long a[100],b[100],n,s,tong_tien[100];
bool check;
int so_to_tien;
// mảng a để lưu các giá trị nhập vào, mảng tong_tien lưu tổng số tiền
void faster(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void init(){
    cin >> n >> s;
    check = false;
    so_to_tien = 30;
    memset(tong_tien,0,sizeof(tong_tien));
    for(int i = 1;i <= n;i++){
        cin >> a[i];
    }
}

/*ví dụ tổng số tờ tiền trong máy atm bằng 3 có giá trị là 1 4 5 và phải trả lại sao cho tổng bằng 5
- vòng lặp với phần tử đầu tiên nó lấy giá trị 1 sau đó đệ quy lấy phần tử 4 - tổng tờ tiền bằng 2
- vòng lặp với phần tử thứ 2 nó lấy giá trị 4 nhưng mảng chỉ còn giá trị 5 nên không có tờ tiền nào
để trả lại 
- vòng lặp với phần tử thứ 3 nó lấy giá trị 5 thỏa mảng điều kiện - tổng số tờ tiền bằng 2
=> tổng số tờ tiền nhỏ nhất cần phải trả là 1
*/

void Try(int i,int col){
    for(int j = col;j <= n;j++){
// với mỗi giá trị của mảng a, mảng tong_tien + với phần tử của mảng a 
        tong_tien[i] = tong_tien[i-1] + a[j];
        if(tong_tien[i] == s){
            check = true;// kiểm tra nếu có tiền trả lại thì check = true;
            so_to_tien = min(so_to_tien,i);// tìm số tờ tiền nhỏ nhất
        }
        else if(tong_tien[i] < s){
            Try(i+1,j+1);
        }
    }
}

void solution(){
    faster();
    int t;
    cin >> t;
    while(t--){
        init();
        Try(1,1);
        if(check == false){
            cout << - 1 << endl;
        }
        else{
            cout << so_to_tien << endl;
        }
    }
}

int main(){
    solution();
    return 0;
}