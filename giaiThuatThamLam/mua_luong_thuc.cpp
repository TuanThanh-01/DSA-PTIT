#include<bits/stdc++.h>
using namespace std;
/*ý tưởng: vì chỉ có 6 ngày trong tuần được mua lương thực nên với S ngày thì ta có 
S - S/7 ngày ta có thể mua được lương thực.Nếu số lương thực cần nhân với số ngày nhiều hơn 
số lương mua được nhân với số ngày có thể mua thì ta in ra -1. nếu không thì dùng vòng lặp chạy từ 1 
đến S-S/7 để tìm xem số ngày ít nhất ta cần phải đi mua lương thực*/
void faster(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solution(){
    faster();
    int t;
    cin >> t;
    while(t--){
        int n,s,m;
        cin >> n >> s >> m;
        if((n * (s - s/7)) < m*s){
            cout << - 1 << endl;
        }
        else{
            for(int i = 1;i <= (s - s/7);i++){
                if((n * i) >= (m * s)){
                    cout << i << endl;
                    break;
                }
            }
        }
    }
}

int main(){
    solution();
    return 0;
}