#include<bits/stdc++.h>
using namespace std;
int a[100],n,b[100],k,dem;
//ý tưởng: dùng sinh tổ hợp rồi xét điều kiện nếu là dãy con tăng dần thì tăng biến đếm lên 1 đơn vị

void faster(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void init(){
    cin >> n >> k;
    for(int i = 1;i <= n;i++){
        cin >> a[i];
    }
    dem = 0;
    for(int i = 1;i <= k;i++){
        b[i] = i;
    }
}

void Try(int i){
    for(int j = b[i - 1] + 1;j <= n - k + i;j++){
        b[i] = j;
        if(i == k){
            bool check = true;
            for(int l = 1;l < k;l++){
                if(a[b[l]] > a[b[l+1]]){
                    check = false;
                    break;
                }
            }
            if(check == true) dem++;
        }
        else Try(i+1);
    }
}

void solution(){
    faster();
    init();
    Try(1);
    cout << dem << endl;
}

int main(){
    solution();
    return 0;
}