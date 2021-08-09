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

void solution(){
    faster();
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        nhap(arr);
        sort(arr.begin(),arr.end());
        if(arr.size() % 2 != 0){
            cout << arr[arr.size() / 2] << endl;
        }
        else{
            cout << arr[arr.size() / 2 - 1] << endl;
        }
    }
}

int main(){
    solution();
    return 0;
}