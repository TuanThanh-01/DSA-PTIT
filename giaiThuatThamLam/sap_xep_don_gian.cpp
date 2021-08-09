#include<bits/stdc++.h>
using namespace std;

void faster(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void nhap(vector<long long> &arr){
    vector<long long>::iterator it;
    for(it = arr.begin();it != arr.end();it++){
        cin >> *it;
    }
}

long long demSoLanSapXep(vector<long long> &arr){
    long long dem = 0;
    for(int i = 0;i < arr.size();i++){
        if(arr[i] < arr.front()){
            dem++;
            arr.insert(arr.begin(),arr[i]);
            arr.erase(arr.begin() + i);
        }
        else if(arr[i] > arr.back()){
            dem++;
            arr.push_back(arr[i]);
            arr.erase(arr.begin() + i);
        }
    }
    return dem;
}

void solution(){
    faster();
    long long n;
    cin >> n;
    vector<long long> arr(n);
    nhap(arr);
    cout<< demSoLanSapXep(arr) << endl;
}

int main(){
    solution();
    return 0;
}