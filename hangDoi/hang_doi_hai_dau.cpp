#include<bits/stdc++.h>
using namespace std;

void faster(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solution(){
    int t;
    cin >> t;
    deque<int> dq;
    while(t--){
        string s;
        cin >> s;
        int tmp;
        if(s == "PUSHFRONT"){
            cin >> tmp;
            dq.push_front(tmp);
        }
        else if(s == "PRINTFRONT"){
            if(dq.empty()){
                cout << "NONE" << endl;
            }
            else{
                cout << dq.front() << endl;
            }
        }
        else if(s == "POPFRONT"){
            if(!dq.empty()){
                dq.pop_front();
            }
        }
        else if(s == "PUSHBACK"){
            cin >> tmp;
            dq.push_back(tmp);
        }
        else if(s == "PRINTBACK"){
            if(!dq.empty()){
                cout << dq.back() << endl;
            }
            else cout << "NONE" << endl;
        }
        else if(s == "POPBACK"){
            if(!dq.empty()){
                dq.pop_back();
            }
        }
    }
}

int main(){
    solution();
    return 0;
}