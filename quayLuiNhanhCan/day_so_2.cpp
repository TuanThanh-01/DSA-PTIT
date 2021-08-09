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
        else{
            cout << arr[i] << " ";
        }
    }
    cout << "]";
    cout << " ";
}
/*ý tưởng: gọi một mảng khác sau đó gắn từng phần tử đó bằng a[i] + a[i+1] sau đó đệ quy mảng được
gắn đó.*/
void dequy(vector<int> arr,int n){   
    if(n == 0) return;
    vector<int> res(n - 1);
    for(int i = 0;i < n - 1;i++){
        res[i] = arr[i] + arr[i+1];
    }
    dequy(res,n - 1);
    in(arr,n);
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
        cout << endl;
    }
}

int main(){
    solution();
    return 0;
}