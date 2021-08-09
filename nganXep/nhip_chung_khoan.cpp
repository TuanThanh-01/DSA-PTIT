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

void nhip_chung_khoan(vector<int> arr){
    vector<int> kq(arr.size());// mảng lưu giá trị
    stack<int> st;// lưu index của mảng arr
    for(int i = 0;i < arr.size();i++){
        while(!st.empty() && arr[i] >= arr[st.top()]){
            st.pop();
        }
        if(st.empty()) kq[i] = i + 1;
        else kq[i] = i - st.top();
        st.push(i);
    }
    for(int i = 0;i < kq.size();i++){
        cout << kq[i] << " ";
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
        nhip_chung_khoan(arr);
        cout << endl;
    }
}

int main(){
    solution();
    return 0;
}