#include<bits/stdc++.h>
using namespace std;
int a[100][100],n,dem = 0;
string s;
vector<string> res;
bool check[100][100];
// khai báo biến đếm nếu không có phần tử trong vector res thì in ra -1

void faster(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void nhap(){
    for(int i = 1;i <= n;i++){
        for(int j = 1;j <= n;j++){
            cin >> a[i][j];
            check[i][j] = true;
        }
    }
}

void in(vector<string> s){
    vector<string>:: iterator it;
    for(it = s.begin();it != s.end();it++){
        cout << *it << " ";
    }   
}

void Try(int i,int j,string s){
// kiểm tra điều kiện 2 phần tử a[1][1] và a[n][n] phải khác 0 thì mới thực hiện được
    if(a[1][1] == 0 || a[n][n] == 0){
        return;
    }
// điều kiện khi kết thúc nếu thỏa mã lấy kết quả đó
    if(i == n && j == n && a[n][n] == 1){
        res.push_back(s);
        dem++;
        return;
    }
// nếu cột tiếp theo bằng 1 và vị trí đó chưa đi
    if(i < n && a[i+1][j] == 1 && check[i+1][j] == true){
        check[i][j] = false;//đánh dấu vị trí
        Try(i+1,j,s+"D");
        check[i][j] = true;// trả lại kết quả
    }
// nếu dòng tiếp theo bằng 1 và vị trí đó chưa đi
    if(j < n && a[i][j+1] == 1 && check[i][j+1] == true){
        check[i][j] = false;// đánh dấu vị trí
        Try(i,j+1,s+"R");
        check[i][j] = true;// trả lại kết quả
    }
}

void solution(){
    faster();
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        nhap();
        res.clear();
        Try(1,1,"");
        if(dem == 0){
            cout << -1;
        }
        else{
            in(res);
        }
        cout << endl;
        dem = 0;
    }
}

int main(){
    solution();
    return 0;
}