#include<bits/stdc++.h>
using namespace std;
int a[100][100],n,dem;
vector<string> res;
string s;
bool check[100][100];// mảng đánh dấu vị trí đã đi qua

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

void Try(int i,int j,string s){
    if(a[1][1] == 0 || a[n][n] == 0){
        return;
    }
// điều kiện khi kết thúc nếu thỏa mã lấy kết quả đó
    if(i == n && j == n && a[i][j] == 1){
        res.push_back(s);
        dem++;
        return;
    }
// nếu cột tiếp theo bằng 1 và vị trí đó chưa đi
    if(i != n && a[i+1][j] == 1 && check[i+1][j] == true){
        check[i][j] = false;//đánh dấu vị trí
        Try(i+1,j,s+"D");
        check[i][j] = true;// trả lại kết quả
    }
// nếu dòng tiếp theo bằng 1 và vị trí đó chưa đi
    if(j != n && a[i][j+1] == 1 && check[i][j+1] == true){
        check[i][j] = false;// đánh dấu vị trí
        Try(i,j+1,s+"R");
        check[i][j] = true;// trả lại kết quả
    }
// nếu dòng trước đó = 1 và ví trí đó chưa đi
    if(j != 1 && a[i][j-1] == 1 && check[i][j-1] == true){
        check[i][j] = false;//đánh dấu vị trí
        Try(i,j-1,s+"L");
        check[i][j] = true;// trả lại kết quả
    }
// nếu cột trước đó = 1 và vị trí đó chưa đi
    if(i != 1 && a[i-1][j] == 1 && check[i-1][j] == true){
        check[i][j] = false;// đánh dấu vị trí chưa đi
        Try(i-1,j,s+"U");
        check[i][j] = true;// trả lại kết quả
    }
}

void in(vector<string> arr){
    vector<string>:: iterator it;
    for(it = arr.begin();it != arr.end();it++){
        cout << *it << " ";
    }
}

void solution(){
    faster();
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        res.clear();
        dem = 0;
        nhap();
        Try(1,1,"");
        if(dem == 0){
            cout << -1;
        }
        else{
            sort(res.begin(),res.end());// sắp xếp để in theo thức tự từ điển
            in(res);
        }
        cout << endl;
    }
}

int main(){
    solution();
    return 0;
}