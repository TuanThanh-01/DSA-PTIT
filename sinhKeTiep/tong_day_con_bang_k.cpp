#include<bits/stdc++.h>
using namespace std;
int check[100],a[100],n,k,dem;
vector<vector<int> > res;
/*ý tưởng: ta cho một mảng để sinh nhị phân check, tạo 1 biến sum, cứ mỗi vị trí nào của check = 1 thì
ta cộng phần tử a tại vị trí đó vào sum, nếu dãy đó có tổng bằng k thì ta thêm vào 1 vector rồi in ra*/
void faster(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void nhap(){
    for(int i = 1;i <= n;i++){
        cin >> a[i];
    }
}

void Try(int i){
    for(int j = 0;j <= 1;j++){
        check[i] = j;
        if(i == n){
            int sum = 0;
            for(int l = 1;l <= n;l++){
                if(check[l] == 1){
                    sum += a[l];
                }
            }
            if(sum == k){
                vector<int> kq;
                for(int l = 1;l <= n;l++){
                    if(check[l] == 1){
                        kq.push_back(a[l]);
                    }
                }
                res.push_back(kq);
                dem++;
            }
        }
        else Try(i+1);
    }
}

void solution(){
    faster();
    cin >> n >> k;
    dem = 0;
    nhap();
    Try(1);
    for(int i = 0;i < res.size();i++){
        for(int j = 0;j < res[i].size();j++){
            cout << res[i][j] << "    ";
        }
        cout << endl;
    }
    cout << dem << endl;
}

int main(){
    solution();
    return 0;
}