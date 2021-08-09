#include<bits/stdc++.h>
using namespace std;
int a[205],n,l[40005],s;
/*
1
5 6
1 3 4 2 8
B1: tương ứng vòng lặp 1
L[6] = 0 && L[5] = 0 => L[6] = 0
L[5] = 0 && L[4] = 0 => L[5] = 0
L[4] = 0 && L[3] = 0 => L[4] = 0
L[3] = 0 && L[2] = 0 => L[3] = 0
L[2] = 0 && L[1] = 0 => L[2] = 0
L[1] = 0 && L[0] = 1 => L[1] = 1
B2: tương ứng vòng lặp 2
L[6] = 0 && L[3] = 0 => L[6] = 0
L[5] = 0 && L[2] = 0 => L[5] = 0
L[4] = 0 && L[1] = 1 => L[4] = 1
L[3] = 0 && L[0] = 1 => L[3] = 1
B3: tương ứng vòng lặp 3
L[6] = 0 && L[2] = 0 => L[6] = 0
L[5] = 0 && L[1] = 1 => L[5] = 1
L[4] = 1 && L[0] = 1 => L[4] = 1
B4: tương ứng vòng lặp 4
L[6] = 0 && L[4] = 1 => L[6] = 1
L[5] = 1 && L[3] = 1 => L[5] = 1
L[4] = 1 && L[2] = 0 => L[4] = 1
L[3] = 1 && L[1] = 1 => L[3] = 1
L[2] = 0 && L[0] = 1 => L[2] = 1
*/
void faster(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void init(){
    cin >> n >> s;
    for(int i = 1;i <= n;i++){
        cin >> a[i];
    }
}

void solution(){
    faster();
    int t;
    cin >> t;
    while(t--){
        init();
        memset(l,0,sizeof(l));
        l[0] = 1;//khởi tạo dãy con có tổng bằng không luôn đúng
//xem kết quả của 1 trường hợp ở trên.
        for(int i = 1;i <= n;i++){
            for(int t = s;t >= a[i];t--){
/* ta xét nếu tổng trước của t-a[i] có thể tạo ra được thì tổng t bây giờ cũng tạo ra được.
ví dụ như ở B3 code mẫu bên trên có L[5] = 1 vì L[5 - a[i]] = L[5 - 4] = L[1] = 1 nên có thể tạo ra 
tổng bằng 5 */
                if(l[t - a[i]] == 1){
                    l[t] = 1;
                }
            }
        }
        if(l[s] == 1){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}

int main(){
    solution();
    return 0;
}