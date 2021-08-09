#include<bits/stdc++.h>
using namespace std;
long long a[105],b[105],res[205],n,m;
// bậc tối đã là n + m - 1

void faster(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void init(){
    cin >> n >> m;
    for(int i = 0;i < n;i++){
        cin >> a[i];
    }
    for(int j = 0;j < m;j++){
        cin >> b[j];
    }
    memset(res,0,sizeof(res));
}

void xu_ly(){
    for(int i = 0;i < n;i++){
        for(int j = 0;j < m;j++){
            res[i + j] = res[i + j] + a[i] * b[j];
        }
    }
    for(int i = 0;i < n + m - 1;i++){
        cout << res[i] << " ";
    }
    cout << endl;
}

void solution(){
    int t;
    cin >> t;
    while(t--){
        init();
        xu_ly();
    }
}

int main(){
    solution();
    return 0;
}