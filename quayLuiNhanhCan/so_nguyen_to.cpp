#include<bits/stdc++.h>
using namespace std;
int N,P,S;
bool check[200];
vector<int> a;// mảng lưu các số nguyên tố 
vector<vector<int> > res;// vector hai chiều lưu kết quả
int b[100];//mảng tính tổng các phần tử đến vị trí số nguyên tố thứ i
int c[100];//mảng đổi phần tử từ vector vì vector lấy từ phần tử 1

void faster(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

// sàng lấy các số nguyên tố từ P đến S
void sang(){
    memset(check,true,sizeof(check));
    for(int i = 2;i <= S;i++){
        if(check[i] == true){
            if(i >= P+1){
                a.push_back(i);
            }
            for(int j = i*i;j <= S;j += i){
                check[j] = false;
            }
        }
    }
}

void in(){
    cout << res.size() << endl;
    for(int i = 0;i < res.size();i++){
        for(int j = 0;j < res[i].size();j++){
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
}

/*
ý tưởng: ta gọi hàm b[i] là hàm tính tổng đến phần tử thứ i hàm b[i] sẽ bằng tổng phần tử thứ b[i-1] + c[i]
xét nếu tổng đó bằng S và các chữ số bằng i thì in ra và ngược lại thì Try(i+1,j+1)
phải gọi đến j+1 để tránh các trường hợp các số trùng nhau 
*/
void Try(int i,int col){
    for(int j = col;j < a.size();j++){
        c[i] = a[j];
        b[i] = b[i-1] + c[i];
        if(i == N && b[i] == S){
            vector<int> kq;
            for(int l = 1;l <= N;l++){
                kq.push_back(c[l]);
            }
            res.push_back(kq);
        }
        else if(i < N && b[i] <= S) Try(i+1,j+1);
    }
}

void solution(){
    faster();
    int t;
    cin >> t;
    while(t--){
        cin >> N >> P >> S;
        sang();
        Try(1,0);
        in();
        res.clear(),a.clear();
        memset(b,0,sizeof(b));
    }
}

int main(){
    solution();
    return 0;
}