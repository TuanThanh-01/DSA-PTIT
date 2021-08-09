#include<bits/stdc++.h>
using namespace std;
/*ý tưởng: nếu ta tìm thấy vị trí i đó bằng s.size hoặc s[i] bằng I thì ta in vị trí đó ra
và in các phần tử trong stack ra còn nếu s[i] bằng D thì ta lưu nó vào trong stack*/
void faster(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int chuyen_ky_tu_sang_so(char c){
    return c - '0';
}

void tinh(string s){
    stack<int> st;
    for(int i = 0;i <= s.size();i++){
        if(i == s.size() || s[i] == 'I'){
            cout << i + 1;
            while(!st.empty()){
                cout << st.top();
                st.pop();
            }
        }
        else if(s[i] == 'D'){
            st.push(i+1);
        }
    }
}

void solution(){
    faster();
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        tinh(s);
        cout << endl;
    }
}

int main(){
    solution();
    return 0;
}