#include<bits/stdc++.h>
using namespace std;
/*ý tưởng: đếm phần tử xuất hiện nhiều nhất rồi chia 2 trường hợp
TH1: kích thước xâu chẵn thì thì số lần xh của phần tử xh nhiều nhất <= kích thước mảng - số lần xh của nó
TH2: kích thước xâu lẻ thì số lần xh của phần tử xh nhiều nhất <= kích thước mảng - số lần xh của nó - 1*/
void faster(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

bool xu_ly(string &s){
    int dem = 0;
    vector<int> a(s.size() + 300);
    for(int i = 0;i < s.size();i++){
        a[s[i]]++;
        dem = max(dem,a[s[i]]);
    }
    if(s.size() % 2 == 0 && dem <= s.size() - dem){//s.size() - dem là số ký tự còn lại
        return true;
    }
    else if(s.size() % 2 != 0 && dem <= s.size() - dem + 1){
        return true;
    }
    return false;
}

void solution(){
    faster();
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s;
        cin >> s;
        if(xu_ly(s) == true){
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