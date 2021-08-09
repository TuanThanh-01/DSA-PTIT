#include<bits/stdc++.h>
using namespace std;
int arr[100],check[100],n,k;
vector<vector<int> > ket_qua;
/*ý tưởng: ta cho một mảng để nhị phân check, tạo 1 biến sum, cứ mỗi vị trí nào của check = 1 thì
ta cộng phần tử arr tại vị trí đó vào sum, nếu dãy đó có tổng bằng k thì ta thêm vào 1 vector sau
đó sắp xếp và in ra */
void faster(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void nhap(){
    for(int i = 1;i <= n;i++){
        cin >> arr[i];
    }
}

void in(vector<vector<int> > arr){
    for(int i = 0;i < arr.size();i++){
        cout << "[";
        for(int j = 0;j < arr[i].size();j++){
            if(j == arr[i].size() - 1){
                cout << arr[i][arr[i].size() - 1];
            }
            else{
                cout << arr[i][j] << " "; 
            }
        }
        cout << "] ";
    }
}

void Try(int i){
    for(int j = 0;j <= 1;j++){
        check[i] = j;
        if(i == n){
            int sum = 0;
            for(int l = 1;l <= n;l++){
                if(check[l] == 1){
                    sum += arr[l];
                }
            }
            if(sum == k){
                vector<int> res;
                for(int l = 1;l <= n;l++){
                    if(check[l] == 1){
                        res.push_back(arr[l]);
                    }
                }
                ket_qua.push_back(res);
            }
        }
        else Try(i+1);
    }
}

void solution(){
    faster();
    int t;
    cin >> t;
    while(t--){
        cin >> n >> k;
        ket_qua.clear();
        nhap();
        sort(arr+1,arr+n+1);
        Try(1);
        if(ket_qua.size() == 0){
            cout << -1;
        }
        else{
            sort(ket_qua.begin(),ket_qua.end());
            in(ket_qua);          
        }
        cout << endl;
    }
}

int main(){
    solution();
    return 0;
}