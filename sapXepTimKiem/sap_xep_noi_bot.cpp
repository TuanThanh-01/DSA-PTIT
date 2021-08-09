#include<bits/stdc++.h>
using namespace std;
/*ý tưởng: Xuất phát từ đầu dãy, so sánh 2 phần tử cạnh nhau để đưa phần tử nhỏ hơn lên 
trước, sau đó lại xét cặp tiếp theo cho đến khi tiến về đầu dãy. Nhờ vậy, ở lần xử lý thứ i 
sẽ tìm được phần tử ở vị trí đầu dãy là i.*/

void faster(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

void nhap(vector<long long> &a){
    vector<long long>:: iterator it;
    for(it = a.begin();it != a.end();it++){
        cin >> *it;
    }
}

void in(vector<long long> a){
    vector<long long>:: iterator it;
    for(it = a.begin();it != a.end();it++){
        cout << *it << " ";
    }
}

void bubble_sort(vector<long long> a){
    for(int i = 0;i < a.size();i++){
        bool check = false;// biến kiểm tra điều kiện nếu không đổi chỗ nữa thì thoát vòng lặp
        for(int j = 0;j < a.size() - i - 1;j++){
            if(a[j] > a[j+1]){
                swap(a[j],a[j+1]);
                check = true;
            }
        }
        if(check == true){
            cout << "Buoc " << i + 1 << ": ";
            in(a);
            cout << endl;
        }
        else{
            break;
        }
    }
}

void solution(){
    faster();
    long long n;
    cin >> n;
    vector<long long> a(n);
    nhap(a);
    bubble_sort(a);
}

int main(){
    solution();
    return 0;
}