#include<bits/stdc++.h>
using namespace std;

void faster(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void nhap(vector<int> &arr){
    vector<int>:: iterator it;
    for(it = arr.begin();it != arr.end();it++){
        cin >> *it;
    }
}

void in(vector<int> arr,int n){
    cout << "[";
    for(int i = 0;i < n;i++){
        if(i == n - 1){
            cout << arr[i];
        }
        else cout << arr[i] << " ";
    }
    cout << "]";
    cout << endl;
}

void dequy(vector<int> arr,int n){
    in(arr,n);
    for(int i = 0;i < n - 1;i++){
        arr[i] = arr[i] + arr[i+1];
    }
    if(n == 1){
        return;
    }
    dequy(arr,n - 1);
}

void solution(){
    faster();
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        nhap(arr);
        dequy(arr,n);
    }
}

int main(){
    solution();
    return 0;
}