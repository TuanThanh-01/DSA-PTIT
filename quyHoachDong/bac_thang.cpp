#include<bits/stdc++.h>
using namespace std;
long long mod = 1e9+7,L[100005],n;
int k;
/*
với n = 4 và k = 2
coi số cách đi lên ở L[0] và L[1] = 1
ví dụ cầu thang có 4 bậc:
- ở tầng thứ 3 ta cần bước 1 bước để lên đến tầng thứ 4 => có L[3] cách
- ở tầng thứ 2 ta cần bước 2 bước để lên đến tầng thứ 4 vì nếu bước 1 bước sẽ giống vs
tầng thứ 3 bước lên

vậy ta có công thức tổng quát L[i] = L[i-1] + L[i-2] +...+ L[i-k] cách đi

vậy kq ví dụ trên sẽ là:
L[2] = L[1] + L[0] = 2
L[3] = L[2] + L[1] = 3
L[4] = L[3] + L[2] = 5
*/
void faster(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

long long so_cach_di_len(){
    memset(L,0,sizeof(L));
    L[0] = L[1] = 1;
    for(int i = 2;i <= n;i++){
        for(int j = 1;j <= min(i,k);j++){
            L[i] = (L[i] + L[i-j]) % mod;
        }
    }
    return L[n];
}

void solution(){
    faster();
    int t;
    cin >> t;
    while(t--){
        cin >> n >> k;
        cout << so_cach_di_len() << endl;
    }
}

int main(){
    solution();
    return 0;
}