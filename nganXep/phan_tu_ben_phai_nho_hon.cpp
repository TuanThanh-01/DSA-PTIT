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
    for(int i = 0;i < arr.size() - 2;i++){
        for(int j = i + 1;j < arr.size() - 1;j++){
            if(arr[j] > arr[i]){
                for(int l = j + 1;l < arr.size();l++){
                    if(arr[l] < arr[j]){
                        cout << arr[l] << " ";
                        break;
                    }
                    if(l == arr.size() - 1){
                        cout << -1 << " ";
                    }
                }
                break;
            }
            if(j == arr.size() - 2) cout << -1 << " ";
        }
    }
    cout << -1 << " " << -1;
    cout << endl;
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