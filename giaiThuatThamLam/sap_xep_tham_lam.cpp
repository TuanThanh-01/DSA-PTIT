#include<bits/stdc++.h>
using namespace std;
/*ý tưởng: tạo một mảng res đã sắp xếp, sau đó so sánh nếu 1 phần tử khác với phần tử cùng vị trí và phần 
tử ở vị trí đối xứng ở mảng đã sắp xếp thì trả về false */
void faster(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void nhap(vector<int> &arr){
    vector<int> ::iterator it;
    for(it = arr.begin();it != arr.end();it++){
        cin >> *it;
    }
}

bool xu_ly(vector<int> arr){
    vector<int> res;
    for(int i = 0;i < arr.size();i++){
        res.push_back(arr[i]);
    }
    sort(res.begin(),res.end());
    for(int i = 0;i < arr.size();i++){
        if(arr[i] != res[i] && arr[i] != res[res.size()-i-1]){
            return false;
            break;
        }
    }
    return true;
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
        if(xu_ly(arr) == true){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
    }
}

int main(){
    solution();
    return 0;
}