#include<bits/stdc++.h>
using namespace std;
/*ý tưởng: sinh nhị phân sau đó đổi nhị phân thành gray rồi in ra*/
bool check = true;

void faster(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

void sinh(string &a){
    int i = a.size() - 1;
    while(i >= 0 && a[i] != '0'){
        a[i] = '0';
        i--;
    }
    if(i >= 0){
        a[i] = '1';
    }
    else{
        check = false;
    }
}

string doi_ma_gray(string &a){
    string res;
    res.push_back(a[0]);
    for(int i = 0;i < a.size() - 1;i++){
        if(a[i] == a[i + 1]){
            res.push_back('0');
        }
        else{
            res.push_back('1');
        }
    }
    return res;
}

void solution(){
    faster();
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        string a;
        for(int i = 0;i < n;i++){
            a.push_back('0');
        }
        string b = a;
        while(check == true){
            cout << b << " ";
            sinh(a);
            b = doi_ma_gray(a);
        }
        check = true;
        cout << endl;
    }
}

int main(){
    solution();
    return 0;
}