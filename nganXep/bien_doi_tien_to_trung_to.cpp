#include<bits/stdc++.h>
using namespace std;

void faster(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

bool check_toan_tu(char c){
    if(c == '+' || c == '-' || c == '*' || c == '/'){
        return true;
    }
    return false;
}

string tiento_trungto(string s){
    stack<string> st;
    for(int i = s.size() - 1;i >= 0;i--){
        if(check_toan_tu(s[i])){
            string a = st.top();st.pop();
            string b = st.top();st.pop();
            string tmp = '(' + a + s[i] + b + ')';
            st.push(tmp);
        }
        else{
            st.push(string(1,s[i]));//biến đổi từ ký tự sang chuỗi string(1,s[i]) vì ta cần lấy chuỗi
        }
    }
    return st.top();
}

void solution(){
    faster();
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        cout << tiento_trungto(s) << endl;
    }
}

int main(){
    solution();
    return 0;
}