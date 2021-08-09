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
    long long res1 = 0,res2 = 0,res3 = 0,res4 = 0;
    sort(arr.begin(),arr.end());
    res1 = arr[0] * arr[1];
    res2 = arr[0] * arr[1] * arr[arr.size() - 1];
    res3 = arr[arr.size() - 1] * arr[arr.size() - 2] * arr[arr.size() - 3];
    res4 = arr[arr.size() - 1] * arr[arr.size() - 2];
    cout << max(res1,max(res2,max(res3,res4))) << endl;
}

int main(){
    faster();
    int n;
    cin >> n;
    vector<long long> arr(n);
    nhap(arr);
    xu_ly(arr);   
    return 0;
}