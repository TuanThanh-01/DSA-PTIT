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

bool handle(vector<int> arr){
    for(int i = 0;i < arr.size() - 1;i++){
        if(arr[i] >= arr[i + 1]){
            return false;
        }
    }
    return true;
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
        if(handle(arr) == true){
            cout << 1 << endl;
        }
        else{
            cout << 0 << endl;
        }
    }
}

int main(){
    solution();
    return 0;
}