#include<bits/stdc++.h>
using namespace std;
int F[100];
void faster(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int QHD(string s){
// F[i] là số xâu mã hóa đến ký tự i
    F[0] = 1,F[1] = 1;
// nếu phần tử đầu tiên bằng 0 thì in ra 0
    if(s[0] == '0'){
        return 0;
    }
    for(int i = 2;i <= s.size();i++){
        if(s[i-1] != '0'){
            F[i] = F[i-1];
        }
        if(s[i-2] == '1' || (s[i-2] == '2' && s[i-1] <= '6')){
            F[i] += F[i-2];
        }
    }
    return F[s.size()];
}

void solution(){
    faster();
    int t;
    cin >> t;
    while(t--){
        memset(F,0,sizeof(F));
        string s;
        cin >> s;
        cout << QHD(s) << endl;
    }
}

int main(){
    solution();
    return 0;
}