#include<bits/stdc++.h>
using namespace std;

void faster(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void sinh(string &s){
    int i = s.size() - 1;
    while(i >= 0 && s[i] == '0'){
        s[i] = '1';
        i--;
    }
    if(i >= 0){
        s[i] = '0';
    }    
}

void solution(){
    faster();
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s;
        cin >> s;
        sinh(s);
        cout << s << endl;
    }
}

int main(){
    solution();
    return 0;
}