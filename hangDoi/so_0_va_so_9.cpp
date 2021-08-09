#include<bits/stdc++.h>
using namespace std;

void faster(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

// tính đổi xâu thành giá trị
long long gia_tri(string s){
    long long tmp = 0;
    for(int i = 0;i < s.size();i++){
        tmp = tmp * 10 + s[i] - '0';
    }
    return tmp;
}

string xu_ly(int n){
    queue<string> q;
    q.push("9");
    while(true){
        string s1 = q.front(); q.pop();
        if(gia_tri(s1) % n == 0){
            return s1;
        }
        string s2 = s1;
        q.push(s1+ "0");
        q.push(s2+ "9");
    }
}

void solution(){
    faster();
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        cout << xu_ly(n) << endl;
    }
}

int main(){
    solution();
    return 0;
}