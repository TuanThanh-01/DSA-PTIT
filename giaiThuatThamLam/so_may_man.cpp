#include<bits/stdc++.h>
using namespace std;
/*ý tưởng: ta dùng vòng lặp kiểm tra khi tổng > 0 
hai biến a là số chữ số 4 còn b là số chữ số 7
nếu tổng chia dư cho 7 bằng 0 thì tăng biến b lên và ngược lại thì tăng biến a*/
void faster(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void xu_ly(int sum){
    int a = 0,b = 0;
    while(sum > 0){
        if(sum % 7 == 0){
            b++;
            sum -= 7;
        }
        else{
            a++;
            sum -= 4;
        }
    }
    if(sum < 0){
        cout << - 1;
    }
    else{
        for(int i = 0;i < a;i++){
            cout << 4;
        }
        for(int j = 0;j < b;j++){
            cout << 7;
        }
    }
}

void solution(){
    faster();
    int t;
    cin >> t;
    while(t--){
        int sum;
        cin >> sum;
        xu_ly(sum);
        cout << endl;
    }
}

int main(){
    solution();
    return 0;
}