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

string tiento_hauto(string s){
    stack<string> st;
    for(int i = s.size() - 1;i >= 0;i--){
        if(check_toan_tu(s[i])){
            string a = st.top();st.pop();
            string b = st.top();st.pop();
            string tmp = a + b + s[i];
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
        cout << tiento_hauto(s) << endl;
    }
}

int main(){
    solution();
    return 0;
}