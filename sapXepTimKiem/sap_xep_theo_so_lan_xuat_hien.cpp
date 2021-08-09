#include<bits/stdc++.h>
using namespace std;

void faster(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
// khai báo struct lưu hai biến là giá trị và số lần xuất hiện của giá trị đó
struct data{
    int value,count;
};

bool compare(data a,data b){
/* hàm truyền vào để so sánh nếu số lần xuất hiện lớn hơn hoặc số lần xuất hiện = nhau mà số có giá trị 
nhỏ hơn thì tra về true */
    if((a.count > b.count) || (a.count == b.count && a.value < b.value)) return true;
    return false;
}

void solution(){
    faster();
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        data a[n];// khai báo struct có n phần tử
        vector<int> d(n+5,0);// khởi tạo mảng đánh dấu có giá trị ban đầu của các phần tử = 0
        for(int i = 0;i < n;i++){
            cin >> a[i].value;
        }
        for(int i = 0;i < n;i++){
            d[a[i].value]++;// mảng đánh dấu số lần xuất hiện của mỗi phần tử 
        }
        for(int i = 0;i < n;i++){
            a[i].count = d[a[i].value];
        }
        sort(a,a+n,compare);
        for(int i = 0;i < n;i++){
            cout << a[i].value << " ";
        }
        cout << endl;
    }
}

int main(){
    solution();
    return 0;
}