#include<bits/stdc++.h>
using namespace std;
/*
push vao stack :-1
duyệt xâu: 
+ nếu gặp '(' thì push index vào stack (-1 0)
+ nếu gặp ')'
pop stack ra (hiểu là lấy '(' ra để đc 1 cặp ngoặc)
nếu pop xong mà empty thì push ( vị trí hiện tại vào, giống như là thêm ')' 
+ độ dài chuỗi con hợp lệ vừa tìm được: vị đang duyệt (dấu đóng) - phần tử đầu trong stack
+ kq = max (kq, kết quả độ dài vừa tìm);
*/
void faster(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int do_dai_lon_nhat(string s){
    int kq = 0;
    stack<int> st;
    st.push(-1);
    for(int i = 0;i < s.size();i++){
        if(s[i] == '('){
            st.push(i);
        }
        else{
            st.pop();
            if(!st.empty()){
                kq = max(kq, i - st.top());
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
        cout << do_dai_lon_nhat(s) << endl;
    }
}

int main(){
    solution();
    return 0;
}