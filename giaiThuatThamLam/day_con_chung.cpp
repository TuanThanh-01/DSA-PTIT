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

void xu_ly(vector<long long> arr1,vector<long long> arr2,vector<long long> arr3){
    bool check = false;
    int i = 0,j = 0,k = 0;
    while(i < arr1.size() && j < arr2.size() && k < arr3.size()){
        if(arr1[i] == arr2[j] && arr2[j] == arr3[k]){
            cout << arr1[i] << " ";
            i++,j++,k++;
            check = true;
        }
        else if(arr1[i] < arr2[j]){
            i++;
        }
        else if(arr2[j] < arr3[k]){
            j++;
        }
        else{
            k++;
        }
    }
    if(check == false){
        cout << "NO";
    }
}

void solution(){
    faster();
    int t;
    cin >> t;
    while(t--){
        long long n,m,k;
        cin >> n >> m >> k;
        vector<long long> arr1(n);
        vector<long long> arr2(m);
        vector<long long> arr3(k);
        nhap(arr1);
        nhap(arr2);
        nhap(arr3);
        xu_ly(arr1,arr2,arr3);
        cout << endl;
    }
}

int main(){
    solution();
    return 0;
}