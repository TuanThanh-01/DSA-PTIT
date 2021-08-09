#include<bits/stdc++.h>
using namespace std;
/*ý tưởng: ta cho phần tử -1 vào trong mảng sau đó xét nếu thấy 1 cặp ngoặc đúng thì lấy kết quả 
cộng thêm 2*/
void faster(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int do_dai(string s){
    stack<int> st;
    int kq = 0;
    st.push(-1);
    for(int i = 0;i < s.size();i++){
        if(s[i] == '('){
            st.push(i);
        }
        else{
            st.pop();
            if(!st.empty()){
                kq += 2;
            }
            else{
                st.push(i);
            }
        }
    }
    return kq;
}

void solution(){
    faster();
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        cout << do_dai(s) << endl;
    }
}

int main(){
    solution();
    return 0;
}