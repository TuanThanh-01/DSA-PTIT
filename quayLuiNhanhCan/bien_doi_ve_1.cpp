#include<bits/stdc++.h>
using namespace std;
int a[100005],n;
// gọi a[i] là số cách biến đổi từ n về 1
void faster(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void xu_ly(){
    memset(a, 0 ,sizeof(a));
    for(int i = 2;i <= n;i++){
        a[i] = a[i-1] + 1;
        if(i % 2 == 0){
            a[i] = min(a[i], a[i/2] + 1);
        }
        if(i % 3 == 0){
            a[i] = min(a[i], a[i/3] + 1);
        }
    }
    cout << a[n] << endl;
}

void solution(){
    faster();
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        xu_ly();
    }
}

int main(){
    solution();
    return 0;
}