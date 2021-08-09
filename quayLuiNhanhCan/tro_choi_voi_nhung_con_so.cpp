#include<bits/stdc++.h>
using namespace std;
bool check[100];
int a[100],n;

void faster(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

bool kiem_tra(int a[100]){
    for(int i = 2;i < n;i++){
        if(abs(a[i+1] - a[i]) == 1 || abs(a[i] - a[i-1]) == 1){
            return false;
        }
    }
    return true;
}

void Try(int i){
    for(int j = 1;j <= n;j++){
        if(check[j]){
            a[i] = j;
            check[j] = false;
            if(i == n){
                if(kiem_tra(a)){
                    for(int i = 1;i <= n;i++){
                        cout << a[i];
                    }
                    cout << endl;
                }
            }
            else{
                Try(i + 1);
            }
            check[j] = true;
        }
    }
}

int main(){
    faster();
    int t;
    cin >> t;
    while(t--){
        memset(a,0,sizeof(a));
        memset(check,true,sizeof(check));
        cin >> n;
        Try(1);
    }
    return 0;
}