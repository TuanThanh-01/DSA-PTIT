#include<bits/stdc++.h>
using namespace std;

void faster(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
/*ý tưởng: 101011 - 111110 
đổi sang mã gray: dư nguyên số đầu tiên sau đó các số sau thì so sánh 2 số liên tiếp nếu
giống nhau thì thêm 0 và khác nhau thì thêm 1 */

void xu_ly(string &a){
    vector<long long> res;
    res.push_back(a[0] - '0');
    for(int i = 0;i < a.size() - 1;i++){
        if(a[i] != a[i+1]){
            res.push_back(1);
        }
        else{
            res.push_back(0);
        }
    }
    vector<long long>:: iterator it;
    for(it = res.begin();it != res.end();it++){
        cout << *it;
    }
}

void solution(){
    faster();
    int t;
    cin >> t;
    while(t--){
        string a;
        cin >> a;
        xu_ly(a);
        cout << endl;
    }
}

int main(){
    solution();
    return 0;
}