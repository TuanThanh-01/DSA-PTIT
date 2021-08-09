#include<bits/stdc++.h>
using namespace std;

void faster(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int priority(char c){
    if(c == '+' || c == '-') return 1;
    if(c == '*' || c == '/') return 2;
    if(c == '^') return 3;
    return -1;
}

void trung_to_hau_to(string s){
    stack<char> st;// khởi tạo stack
    string ans = "";// khởi tạo kết quả
    for(int i = 0;i < s.size();i++){
// nếu phần tử là dấu ngoặc đơn thì thêm vào stack
        if(s[i] == '('){
            st.push(s[i]);
        }
// nếu phần tử là chữ cái thì thêm vào kết quả
        else if(isalpha(s[i])){
            ans += s[i];
        }
        else if(s[i] == ')'){
// nếu stack không rỗng và phần tử đầu tiên của stack khác ( thì thêm nó vào ans
            while(!st.empty() && st.top() != '('){
                char tmp = st.top();
                st.pop();
                ans += tmp;
            }
// xóa dấu (
            if(st.top() == '('){
                st.pop();
            }
        }
        else{
/* nếu stack không rỗng vào mức độ ưu tiên của phần tử s[i] nhỏ hơn hoặc bằng phần tử đầu tiên 
của stack thì ta lấy phần tử đầu tiên của stack cho vào ans sau đó thêm phần tử s[i] vào stacks*/
            while(!st.empty() && priority(s[i]) <= priority(st.top())){
                char tmp1 = st.top();
                st.pop();
                ans += tmp1;
            }
            st.push(s[i]);
        }
    }
// lấy nốt các phần tử còn lại trong stack ra
    while(!st.empty() && st.top() != '('){
        char tmp2 = st.top();
        st.pop();
        ans += tmp2;
    }
    cout << ans << endl;
}

void solution(){
    faster();
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        trung_to_hau_to(s);
    }
}

int main(){
    solution();
    return 0;
}