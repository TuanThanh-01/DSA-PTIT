#include<bits/stdc++.h>
using namespace std;
char a[20] = {'0','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q'};
int b[100],n,k;
void faster(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void Try(int i){
    for(int j = b[i-1] + 1;j <= n - k + i;j++){
        b[i] = j;
        if(i == k){
            for(int l = 1;l <= k;l++){
                cout << a[b[l]];
            }
            cout << endl;
        }
        else Try(i + 1);
    }
}

void solution(){
    faster();
    int t;
    cin >> t;
    while(t--){
        memset(b,0,sizeof(b));
        cin >> n >> k;
        Try(1);
    }
}

int main(){
    solution();
    return 0;
}