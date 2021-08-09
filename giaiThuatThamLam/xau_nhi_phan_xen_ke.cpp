#include<bits/stdc++.h>
using namespace std;
int a[1005],b[1005],n;
/*ý tưởng: vì xâu nhị phân xen kẽ nhau nên chỉ có 2 xâu thỏa mãn trong dãy xâu nhị phân có độ dài
n nên ta xét 2 mảng nếu vị trí đó chia hết cho 2 thì gắn phần tử mảng a = 0, b = 1 và ngược lại
sau đó in ra*/

void faster(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void xu_ly(){
    for(int i = 1;i <= n;i++){
        if(i % 2 == 0){
            a[i] = 0;
            b[i] = 1;
        }
        else{
            a[i] = 1;
            b[i] = 0;
        }
    }
    for(int i = 1;i <= n;i++){
        cout << b[i] << " ";
    }
    cout << endl;
    for(int j = 1;j <= n;j++){
        cout << a[j] << " ";
    }
}

void solution(){
    faster();
    memset(a,0,sizeof(a));
    memset(b,0,sizeof(b));
    cin >> n;
    xu_ly();
}

int main(){
    solution();
    return 0;
}