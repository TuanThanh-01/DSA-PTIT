#include<bits/stdc++.h>
using namespace std;
/*
có ví dụ: )(())(((
loại bỏ những cặp ngoặc hợp lệ đi
=> stack còn lại )(((
nửa bên trái (ngoặc đóng): 
    đổi chiều 1 nửa => nửa bên trái đúng
nửa bên phải (ngoặc mở):
    đổi chiều 1 nửa => nửa ngoặc mở ban đầu này cũng thành hợp lệ
nếu nửa trái có lẻ phần tử: còn 1 dấu vẫn đóng (thiếu mở)
nếu nửa phải có lẻ phần tử: còn 1 dấu vẫn mở (thiếu đóng)
    đổi đồng thời 2 cái này sẽ có 1 cặp hợp lệ
*chú ý: vì kích cỡ đề bài cho luôn là chẵn nên nếu nửa trái lẻ thì nửa phải cũng lẻ.
đếm số ngoặc đóng: dem_ngoac_dong;
đếm số ngoặc mở: dem_ngoac_mo
kết quả: dong/2 + mo/2 + dong%2 +mo%2
*/

void faster(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solution(){
    faster();
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        stack<char> st;
        for(int i = 0;i < s.size();i++){
            if(s[i] == '('){
                st.push(s[i]);
            }
            else{
                if(st.empty() || st.top() == ')'){
                    st.push(s[i]);
                }
                else if(st.top() == '('){
                    st.pop();
                }
            }
        }
        int dem_ngoac_mo = 0,dem_ngoac_dong = 0;
        while(!st.empty()){
            if(st.top() == ')'){
                dem_ngoac_dong++;
            }
            else{
                dem_ngoac_mo++;
            }
            st.pop();
        }
        cout << dem_ngoac_mo / 2 + dem_ngoac_dong / 2 + dem_ngoac_dong % 2 + dem_ngoac_mo % 2;
        cout << endl;
    }
}

int main(){
    solution();
    return 0;
}