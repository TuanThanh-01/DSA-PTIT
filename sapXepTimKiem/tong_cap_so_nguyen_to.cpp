#include<bits/stdc++.h>
using namespace std;
int arr[1000000];
void faster(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void sang_nguyen_to(){
    arr[0] = arr[1] = false;
    for(int i = 2;i <= 1000000;i++){
        arr[i] = true;
    }
    for(int i = 2;i <= sqrt(1000000);i++){
        if(arr[i] == true){
            for(int j = i*i;j <= 1000000;j += i){
                arr[j] = false;
            }
        }
    }
}

void solution(){
    faster();
    sang_nguyen_to();
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        bool check = false;
        for(int i = 2;i <= n;i++){
            if(arr[i] == true && arr[n - i] == true){
                check = true;
                cout << i << " " << n - i << endl;
                break;
            }
        }
        if(check == false){
            cout << -1 << endl;
        }
    }
}

int main(){
    solution();
    return 0;
}