#include<bits/stdc++.h>
using namespace std;

void faster(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solution(){
    faster();
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin,s);
        istringstream iss(s);
        stack<string> st;
        while(iss){
            string u;
            iss >> u;
            if(iss){
                st.push(u);
            }
        }
        while(!st.empty()){
            cout << st.top() << " ";
            st.pop();
        }
        cout << endl;
    }
}

int main(){
    solution();
    return 0;
}