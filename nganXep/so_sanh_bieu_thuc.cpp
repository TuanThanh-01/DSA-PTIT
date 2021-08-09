#include<bits/stdc++.h>
using namespace std;
/* ta đổi biểu thức a thành biểu thức tương đương không chứa dấu ngoặc(cách làm giông bài biểu
thức tương đương) sau đó so sánh */
void faster(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

string tim_bieu_thuc_tuong_duong(string s){
    stack<int> st;
    string res;
    for(int i = 0;i < s.size();i++){
        if(s[i] == '('){
            st.push(i);
        }
        else if(s[i] == ')'){
            if(st.size() > 0){
                int tmp = st.top();st.pop();
                if(s[tmp - 1] == '-'){
                    for(int j = tmp;j <= i;j++){
                        if(s[j] == '-'){
                            s[j] = '+';
                        }
                        else if(s[j] == '+'){
                            s[j] = '-';
                        }
                    }
                }
            }
        }
    }
    for(int i = 0;i < s.size();i++){
        if(s[i] != '(' && s[i] != ')'){
            res.push_back(s[i]);
        }
    }
    return res;
}

bool ktra(string a,string b){
    if(a == b){
        return true;
    }
    return false;
}

void solution(){
    faster();
    int t;
    cin >> t;
    while(t--){
        string a,b;
        cin >> a >> b;
        a = tim_bieu_thuc_tuong_duong(a);
        b = tim_bieu_thuc_tuong_duong(b);
        if(ktra(a,b) == true){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}

int main(){
    solution();
    return 0;
}