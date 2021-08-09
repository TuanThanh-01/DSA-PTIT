#include<bits/stdc++.h>
using namespace std;
/*
ví dụ test
3
2 3
1 3
1 2
mảng arr[i] lúc này sẽ lưu
arr[1] có các phần tử là 2, 3
arr[2] có các phần tử là 1,3
arr[3] có các phần tử là 1,2
sau đó ta xét từng trường hợp trong arr[i] nếu i < arr[i] thì in ra i và arr[i]
*/
void faster(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solution(){
    faster();
    int n;
    cin >> n;
    cin.ignore();
    vector<int> arr[100];// mảng lưu các cạnh

    for(int i = 1;i <= n;i++){
        string s;
        getline(cin,s);
        istringstream iss(s);// tách chuỗi có dấu cách
        while(iss){
            int u;
            iss >> u;
            if(iss){
                arr[i].push_back(u);
            }
        }
    }

    for(int i = 1;i <= n;i++){
        for(int j = 0;j < arr[i].size();j++){
// kiểm tra đỉnh đầu phải nhỏ hơn đỉnh cuối mới in ra
            if(arr[i][j] > i){
                cout << i << " " << arr[i][j] << endl;
            }
        }
    }
}

int main(){
    solution();
    return 0;
}