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

void swap_hai_so(int &a,int &b){
    int tmp = a;
    a = b;
    b = tmp;
}

int dem_so_lan_doi_cho(vector<int> &arr){
    int count = 0;
    for(int i = 0;i < arr.size() - 1;i++){
        int x = i;// khởi tạo biến x tại vị trí i
        int min1 = arr[i];// khởi tạo giá trị nhỏ nhất sau mỗi vòng lặp
        for(int j = i + 1;j < arr.size();j++){
        // tìm số nhỏ nhất so với arr[i]
            if(arr[j] < min1){
                min1 = arr[j];
                x = j;
            }
        }
        swap_hai_so(arr[i],arr[x]);
        if(x != i){//nếu vị trí đó khác thì tăng biến đếm lên 1
            count++;
        }
    }
    return count;
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
        cout << dem_so_lan_doi_cho(arr) << endl;
    }
}

int main(){
    solution();
    return 0;
}