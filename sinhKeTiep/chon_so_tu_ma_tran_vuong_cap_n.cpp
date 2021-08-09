#include<bits/stdc++.h>
using namespace std;
bool check[100];
int a[100][100],n,k,x[100];
vector<vector<int> > res;
/*ý tưởng: ta sinh hoán vị ma trận sau đó cộng lại nếu bằng k thì lưu vào 1 vector 2 chiều sau đó in ra*/
void faster(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void nhap(){
    for(int i = 1;i <= n;i++){
        check[i] = true;
        for(int j = 1;j <= n;j++){
            cin >> a[i][j];
        }
    }
}

void Try(int i){
    for(int j = 1;j <= n;j++){
        if(check[j] == true){
            x[i] = j;// x[i] dùng để đánh dấu vị trí của cột khi xét mỗi hàng
            check[j] = false;
            if(i == n){
                int sum = 0;
                for(int l = 1;l <= n;l++){
                    sum += a[l][x[l]];
                }
                if(sum == k){
                    vector<int> kq;
                    for(int l = 1;l <= n;l++){
                        kq.push_back(x[l]);
                    }
                    res.push_back(kq);
                }
            }
            else Try(i+1);
            check[j] = true;
        }
    }
}

void in(){
    for(int i = 0;i < res.size();i++){
        for(int j = 0;j < res[i].size();j++){
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
}

void solution(){
    faster();
    cin >> n >> k;
    res.clear();
    nhap();
    Try(1);
    cout << res.size() << endl;
    in();

}

int main(){
    solution();
    return 0;
}