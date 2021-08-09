#include<bits/stdc++.h>
using namespace std;

void faster(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solution(){
    faster();
    string s;
    stack<int> st;
    int value;
    while(cin >> s){
        if(s == "push"){
            cin >> value;
            st.push(value);
        }
        else if(s == "pop" && !st.empty()){
            st.pop();
        }
        else{
            if(st.empty() == true){
                cout << "empty";
                return;
            }
            vector<int> res;
            while(!st.empty()){
                res.push_back(st.top());
                st.pop();
            }
            reverse(res.begin(),res.end());
            vector<int>:: iterator it;
            for(it = res.begin();it != res.end();it++){
                cout << *it << " ";
                st.push(*it);
            }
            cout << endl;
        }
    }
}

int main(){
    solution();
    return 0;
}