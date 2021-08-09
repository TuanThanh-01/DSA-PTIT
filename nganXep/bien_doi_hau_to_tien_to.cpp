#include<bits/stdc++.h>
using namespace std;

void faster(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

bool ky_tu(char c){
    if(c == '+' || c == '-' || c == '*' || c == '/'){
        return true;
    }
    return false;
}

string hauto_tiento(string s){
    stack<string> st;
    for(int i = 0;i < s.size();i++){
        if(ky_tu(s[i])){
            string a = st.top();st.pop();
            string b = st.top();st.pop();
            string tmp = s[i] + b + a;
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
        cout << hauto_tiento(s) << endl;
    }
}

int main(){
    solution();
    return 0;
}