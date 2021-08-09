#include<bits/stdc++.h>
using namespace std;
long long F[10005],n;
/*ý tưởng: số ugly là số có bội bằng 2 bằng 3 hoặc bằng 5 ví dụ 1,2,3,5,6,8,9,10,...
ta khai báo biến x2,x3,x5 là chỉ số bội 2, bội 3 và bội 5. mảng F[i] là số ugly thứ i
với mỗi số F[i] ta cần tìm min các số có bội 2,3,5 nếu thỏa mãn bội số nào thì tăng chỉ số của nó lên 1
*/

void faster(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void so_ugly(){
    int x2 = 1,x3 = 1,x5 = 1;
    F[1] = 1;
    for(int i = 2;i <= n;i++){
        F[i] = min(F[x2] * 2,min(F[x3] * 3,F[x5] * 5));
        if(F[i] == F[x2] * 2){
            x2++;
        }
        if(F[i] == F[x3] * 3){
            x3++;
        }
        if(F[i] == F[x5] * 5){
            x5++;
        }
    }
    cout << F[n];
}

void solution(){
    faster();
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        memset(F,0,sizeof(F));
        so_ugly();
        cout << endl;
    }
}

int main(){
    solution();
    return 0;   
}