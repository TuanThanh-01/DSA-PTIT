#include<bits/stdc++.h>
using namespace std;
/*ta tạo một stack để lưu vị trí các dấu ngoặc mở nếu gặp dấu ngoặc đóng thì xét vị trí của dấu
ngoặc mở đến vị trí dấu ngoặc đóng nếu đằng trước nó là dấu trừ thì thay đổi hết các dấu trong
ngoặc.*/
void faster(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

string bieu_thuc_tuong_duong(string &s){
    stack<int> st;
    for(int i = 0;i < s.size();i++){
        if(s[i] == '('){
            st.push(i);
        }
        else if(s[i] == ')'){
// kiểm tra điều kiện nếu stack chưa rỗng
            if(st.size() > 0){
                int tmp = st.top();st.pop();
                if(s[tmp - 1] == '-'){
                    for(int j = tmp;j <= i;j++){
                        if(s[j] == '+'){
                            s[j] = '-';
                        }
                        else if(s[j] == '-'){
                            s[j] = '+';
                        }
                    }
                }
            }
        }
    }
    string res;
    for(int i = 0;i < s.size();i++){
        if(s[i] != '(' && s[i] != ')'){
            res.push_back(s[i]);
        }
    }
    return res;
}

void solution(){
    faster();
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        cout << bieu_thuc_tuong_duong(s) << endl;
    }
}

int main(){
    solution();
    return 0;
}