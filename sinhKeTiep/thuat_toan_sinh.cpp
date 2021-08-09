#include<bits/stdc++.h>
using namespace std;
bool check = true;
/*ý tưởng: sinh xâu nhị phân sau đó kiểm tra điều kiện xâu đó là thuận nghịch, những xâu thỏa mãn
ta lưu vào 1 mảng sau đó sắp xếp rồi in ra*/
void faster(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void in(string s){
    for(int i = 0;i < s.size();i++){
        cout << s[i] << "    ";
    }
}

void sinh(string &s){
    int i = s.size() - 1;
    while(i >= 0 && s[i] != '0'){
        s[i] = '0';
        i--;
    }
    if(i < 0){
        check = false;
    }
    else s[i] = '1';
}

bool check_dao(string &s){
    string res = s;
    reverse(s.begin(),s.end());
    if(res == s){
        return true;
    }
    return false;
}

void solution(){
    faster();
    int n;
    cin >> n;
    string s;
    for(int i = 0;i < n;i++){
        s.push_back('0');
    }
    vector<string> res;
    while(check == true){
        if(check_dao(s) == true){
            res.push_back(s);
        }
        sinh(s);
    }
    sort(res.begin(),res.end());
    for(int i = 0;i < res.size();i++){
        in(res[i]);
        cout << endl;
    }
}

int main(){
    solution();
    return 0;
}