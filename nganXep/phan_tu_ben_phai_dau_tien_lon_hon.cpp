#include<bits/stdc++.h>
using namespace std;

void faster(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void nhap(vector<long long> &arr){
    vector<long long>:: iterator it;
    for(it = arr.begin();it != arr.end();it++){
        cin >> *it;
    }
}

void xu_ly(vector<long long> arr){
    for(int i = 0;i < arr.size() - 1;i++){
        bool check = false;
        for(int j = i + 1;j < arr.size();j++){
            if(arr[i] < arr[j]){
                check = true;
                cout << arr[j] << " ";
                break;
            }
        }
        if(check == false){
            cout << -1 << " ";
        }
    }
    cout << -1;
}

void solution(){
    faster();
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        vector<long long> arr(n);
        nhap(arr);
        xu_ly(arr);
        cout << endl;
    }
}

int main(){
    solution();
    return 0;
}