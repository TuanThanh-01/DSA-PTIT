#include<bits/stdc++.h>
using namespace std;
int a[1005],n,F[1005];
// F[i] là tổng phần tử lớn nhất tính đến vị trí thứ i
// ý tưởng giống bài dãy con tăng dài nhất
void faster(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void init(){
    cin >> n;
    for(int i = 1;i <= n;i++){
        cin >> a[i];
    }
}

int QHD(){
    memset(F,0,sizeof(F));
    int res = 1;
    for(int i = 1;i <= n;i++){
        F[i] = a[i];
        for(int j = 1;j < i;j++){
            if(a[j] < a[i]){
                F[i] = max(F[i],F[j]+a[i]);
            }
        }
        res = max(res,F[i]);
    }
    return res;
}

void solution(){
    faster();
    int t;
    cin >> t;
    while(t--){
        init();
        cout << QHD() << endl;
    }
}

int main(){
    solution();
    return 0;
}