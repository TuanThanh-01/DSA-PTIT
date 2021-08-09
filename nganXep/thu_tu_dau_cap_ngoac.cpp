#include<bits/stdc++.h>
using namespace std;
/*ý tưởng: tạo 2 stack st và st1, gặp dấu ( tăng dem lên 1 sau đó them dem vào st,st1 
nếu gặp dấu ) thì thêm phần tử đầu tiên của st vào st1 sau đó xóa phần tử đầu tiên của st
lấy kết quả thêm vào vector sau đó đảo ngược vector đó rồi in ra */
void faster(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void xu_ly(string s){
    stack<int> st;
    stack<int> st1;
    int dem = 0;
    for(int i = 0;i < s.size();i++){
        if(s[i] == '('){
            dem += 1;
            st.push(dem);
            st1.push(dem);
        }
        else if(s[i] == ')'){
            st1.push(st.top());
            st.pop();
        }
    }
    vector<int> res;
    while(!st1.empty()){
        res.push_back(st1.top());
        st1.pop();
    }
    reverse(res.begin(),res.end());
    for(int i = 0;i < res.size();i++){
        cout << res[i] << " ";
    }
}

void solution(){
    faster();
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin,s);
        xu_ly(s);
        cout << endl;
    }
}

int main(){
    solution();
    return 0;
}