#include<bits/stdc++.h>
using namespace std;

void faster(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void xu_ly(long long p,long long q){
    while(true){
// kiểm tra nếu mẫu chia hết cho tử thì dừng lại
        if(q % p == 0){
            cout << "1/" << q/p;
            break;
        }
        else{
            long long x = q/p + 1;// ví dụ 2/3= 1/2 + 1/6 thì bước đầu tiên x = 2
            cout << "1/" << x << " + ";
/* quy đồng tử số và mẫu số sau mỗi bước ví dụ 2/3 sau khi - 1/2 ta thực hiện phép quy đồng
được tử số = 2.2-3 = 1 còn mẫu số = 2.3 = 6*/
            p = p * x - q;
            q = q * x; 
        }
    }
}

void solution(){
    faster();
    int t;
    cin >> t;
    while(t--){
        long long p,q;
        cin >> p >> q;
        xu_ly(p,q);
        cout << endl;
    }
}

int main(){
    solution();
    return 0;
}