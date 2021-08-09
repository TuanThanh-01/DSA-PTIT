#include<bits/stdc++.h>
using namespace std;
/*
ví dụ: (a + b*(c-d))
+ duyệt từ trái sang phải nếu gặp ')' thì tìm ngược về cho khi nào thấy '('
+ nếu trong quá trình lùi dần mà gặp toán tử (hay giữa 2 dấu ngoặc đã có toán tử) 
thì biểu thức k thừa dấu ngoặc 
+ nếu k phải ')' : push vào phần tử ở chuỗi vào trong stack
*/

void faster(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

bool kiem_tra(string s){
    stack<char> st;
    for(int i = 0;i < s.size();i++){
        if(s[i] == ')'){
            bool check = true;
            char tmp = st.top();
            st.pop();
            while(tmp != '('){
                if(tmp == '+' || tmp == '-' || tmp == '*' || tmp == '/'){
                    check = false;
                }
                tmp = st.top();
                st.pop();
            }
            if(check == true){
                return true;
            }
        }
        else{
            st.push(s[i]);
        }
    }
    return false;
}

void solution(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin,s);
        if(kiem_tra(s) == true){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
    }
}

int main(){
    solution();
    return 0;
}