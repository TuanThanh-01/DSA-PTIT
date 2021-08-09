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
    queue<int> q;
    while(t--){
        string s;
        cin >> s;
        int tmp;
        if(s == "PUSH"){
            cin >> tmp;
            q.push(tmp);
        }
        else if(s == "POP"){
            if(!q.empty()) q.pop();
        }
        else if(s == "PRINTFRONT"){
            if(q.empty()){
                cout << "NONE" << endl;
            }
            else{
                cout << q.front() << endl;
            }
        }
    }
}

int main(){
    solution();
    return 0;
}