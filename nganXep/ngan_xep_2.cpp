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
    int value;
    string s;
    stack<int> st;
    while(t--){
        cin >> s;
        if(s == "PUSH"){
            cin >> value;
            st.push(value);
        }
        else if(s == "POP" && !st.empty()){
            st.pop();
        }
        else if (s == "PRINT"){
            if(st.empty()){
                cout << "NONE" << endl;
            }
            else{
                cout << st.top() << endl;
            }
        }
    }
}

int main(){
    solution();
    return 0;
}