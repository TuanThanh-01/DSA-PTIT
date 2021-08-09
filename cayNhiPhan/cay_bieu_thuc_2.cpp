#include<bits/stdc++.h>
using namespace std;

void faster(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

// hàm tính kết quả 
int tinh_kq(int a,int b,char s){
    if(s == '+') return a + b;
    if(s == '-') return a - b;
    if(s == '*') return a * b;
    if(s == '/') return a / b;
}

// hàm lấy 1 string chỉ toàn các chữ số, không chứa ký tự như + - * /
string bien_doi(string s){
    string res = "";
    for(int i = 0;i < s.size();i++){
        if(s[i] != '+' && s[i] != '-' && s[i] != '*' && s[i] != '/'){
            res += s[i];
        }
    }
    return res;
}

// hàm tính kq, ta dùng queue để lưu các số và tính
void xu_ly(string s,vector<int> &res){
    queue<int> q;
// lấy các giá trị của vector vào queue
    for(int i = res.size() - 1;i >= 0;i--){
        q.push(res[i]);
    }
    for(int i = s.size() - 1;i >= 0;i--){
        if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/'){
            int tmp1 = q.front();q.pop();
            int tmp2 = q.front();q.pop();
            int res = tinh_kq(tmp2,tmp1,s[i]);
            q.push(res);
        }
    }
    cout << q.front();
}

void solution(){
    faster();
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        cin.ignore();
        string s;
        getline(cin, s);
        string tmp = bien_doi(s);
// sử dụng istringstream để loại bỏ khoảng trắng và lấy các giá trị từ string thành số
        istringstream iss(tmp);
        vector<int> res;// lưu các số
        while(iss){
            int u;
            iss >> u;
            if(iss){
                res.push_back(u);
            }
        }
        xu_ly(s,res);
        cout << endl;
    }
}

int main(){
    solution();
    return 0;
}