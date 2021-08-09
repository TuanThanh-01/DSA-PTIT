#include<bits/stdc++.h>
using namespace std;
// giống bài biến đổi hậu tố trung tố
void faster(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

string xu_ly(string s){
    stack<string> st;
    for(int i = 0;i < s.size();i++){
        if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/'){
            string a = st.top();st.pop();
            string b = st.top();st.pop();
            string tmp = b + s[i] + a;
            st.push(tmp);
        }
        else{
            st.push(string(1,s[i]));
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
        cout << xu_ly(s) << endl;
    }
}

int main(){
    solution();
    return 0;
}