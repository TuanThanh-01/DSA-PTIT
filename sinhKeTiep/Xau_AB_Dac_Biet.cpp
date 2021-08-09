#include<bits/stdc++.h>
using namespace std;
/*ý tưởng: sinh nhị phân sau đó dùng điều kiện kiểm tra k số 1 liên tiếp để in ra các chuỗi thỏa mãn*/
bool check = true;
void faster(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void sinh(string &a){
    int i = a.size() - 1;
    while(i >= 0 && a[i] != 'A'){
        a[i] = 'A';
        i--;
    }
    if(i >= 0){
        a[i] = 'B';
    }
    else{
        check = false;
    }
}


bool kiem_tra(string &a,int k){
    int ktra = 0;//biến dùng để ktra k chữ 'A' liên tiếp
/*ví dụ nếu dãy là AAAAA thì khi chạy vòng lặp gặp thì biến ktra của nó sẽ tăng lên 3 lần
nên không thoa mãn đc điều kiện có k chữ A liên tiếp*/
    for(int i = 0;i <= a.size() - k;i++){
        bool check1 = true;
        for(int j = i;j < i + k;j++){
        // kiểm tra nếu có phần tử bằng 'B' thì dừng vòng lặp
            if(a[j] == 'B'){
                check1 = false;
                break;
            }
        }
        if(check1 == true){
            ktra++;
        }
    }
    if(ktra == 1){
        return true;
    }
    return false;
}

void solution(){
    faster();
    int n,k;
    cin >> n >> k;
    string a;
    for(int i = 0;i < n;i++){
        a.push_back('A');
    }
    vector<string> res;
    int dem = 0;
    while(check == true){
        if(kiem_tra(a,k) == true){
            res.push_back(a);
            dem++;
        }
        sinh(a);
    }
    cout << dem << endl;
    for(int i = 0;i < res.size();i++){
        cout << res[i] << endl;
    }
}

int main(){
    solution();
    return 0;
}