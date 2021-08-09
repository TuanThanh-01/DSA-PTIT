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

void xu_ly(vector<int> arr){
    stack<int> st;
    for(int i = 0;i < arr.size() - 1;i++){
        bool check = false;
        if(arr[i] > arr[i + 1]){
            st.push(arr[i]);
        }
        else{
            while(!st.empty()){
                if(arr[i + 1] > st.top()){
                    st.pop();
                    check = true;
                }
                else{
                    break;
                }
            }
            if(check == true){
                cout << arr[i] << " ";
            }
        }
    }
    cout << arr.back() << endl;
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
        xu_ly(arr);
    }
}

int main(){
    solution();
    return 0;
}