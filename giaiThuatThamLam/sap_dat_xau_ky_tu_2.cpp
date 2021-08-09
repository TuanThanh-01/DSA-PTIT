#include<bits/stdc++.h>
using namespace std;
/*kiểm tra xem số ký tự xh nhiều nhất nhân với khoảng cách D có lớn hơn độ dài chuỗi trừ đi
tổng số ký tự còn lại thì trả về false*/
void faster(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

bool xu_ly(string &s,int D){
    vector<int> a(s.size() + 300);
    int dem = 0;// đếm phần tử xuất hiện nhiều nhất
    for(int i = 0;i < s.size();i++){
        a[s[i]]++;
        dem = max(dem, a[s[i]]);
    }
    if((dem - 1) *(D - 1) > s.size() - dem){//(dem - 1) *(D - 1) là số khoảng trống tạo ra giữa 2 ký tự
        return false;
    }
    return true;
}

void solution(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        int D;
        string s;
        cin >> D >>s;
        if(xu_ly(s,D) == true){
            cout << 1 << endl;
        }
        else{
            cout << -1 << endl;
        }
    }
}

int main(){
    solution();
    return 0;
}