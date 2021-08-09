#include<bits/stdc++.h>
using namespace std;
/*ý tưởng: dùng tìm kiếm nhị phần để tìm ra phần tử 1 đầu tiên
thì vị trí của phần tử 1 là số phần tử 0 trong dãy*/
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

int binary_search(vector<int> a,int left,int right){
    while(left <= right){
        int mid = (left + right) / 2;
        if(a[mid] == 1 && a[mid-1] == 0){   // điều kiện để tìm phần tử 1 đầu tiên
            return mid;
        }
        else if(a[mid] == 0){
            left = mid + 1;
        }
        else{
            right = mid - 1;
        }
    }
    return -1;
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
        if(arr.at(0) == 1){
            cout << 0 << endl;
        }
        else if(arr.back() == 0){
            cout << arr.size() << endl;
        }
        else{
            cout << binary_search(arr,0,arr.size()-1) << endl;
        }
    }
}

int main(){
    solution();
    return 0;
}