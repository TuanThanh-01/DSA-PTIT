#include<bits/stdc++.h>
using namespace std;
int a[1005],n,k;
void faster(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void init(){
    cin >> n >> k;
    for(int i = 1;i <= k;i++){
        cin >> a[i];
    }
}

void tap_con(){
    int count = 0;
    for(int i = 1;i <= k;i++){
        if(a[i] == i){
            count++;
        }
    }
    if(count == k){
        for(int i = 1;i <= k;i++){
            cout << n - k + i << " ";
        }
    }
    else{
        int j = k - 1;
        while(a[j + 1] == a[j] + 1){
            j--;
        }
        a[j + 1]--;
        for(int i = j + 2;i <= k;i++){
            a[i] = n - k + i;
        }
        for(int l = 1;l <= k;l++){
            cout << a[l] << " ";
        }
    }
}

void solution(){
    faster();
    int t;
    cin >> t;
    while(t--){
        init();
        tap_con();
        cout << endl;
    }
}

int main(){
    solution();
    return 0;
}