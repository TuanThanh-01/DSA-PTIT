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
    vector<long long> chan;
    vector<long long> le;
    for(int i = 0;i < arr.size();i++){
        if(i % 2 != 0){
            chan.push_back(arr[i]);
        }
        else{
            le.push_back(arr[i]);
        }
    }
    sort(chan.begin(),chan.end());
    reverse(chan.begin(),chan.end());
    sort(le.begin(),le.end());
    for(int i = 0;i < arr.size() / 2;i++){
        cout << le[i] << " " << chan[i] << " ";
    }
    if(arr.size() % 2 != 0){
        cout << le.back();
    }
}

void solution(){
    faster();
    long long n;
    cin >> n;
    vector<long long> arr(n);
    nhap(arr);
    xu_ly(arr);
}

int main(){
    solution();
    return 0;
}