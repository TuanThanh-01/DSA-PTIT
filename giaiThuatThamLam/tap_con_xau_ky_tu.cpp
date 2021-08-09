#include<bits/stdc++.h>
using namespace std;
string s;
vector<string> res;
int a[100],n;

void faster(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void Try(int i){
    for(int j = 0;j <= 1;j++){
        a[i] = j;
        if(i == n){
            string tmp = "";
            for(int l = 1;l <= n;l++){
                if(a[l] == 1){
                    tmp += s[l - 1];
                }
            }
            res.push_back(tmp);
        }
        else Try(i + 1);
    }
}

void solution(){
    faster();
    int t;
    cin >> t;
    while(t--){
        res.clear();
        cin >> n;
        cin >> s;
        Try(1);
        sort(res.begin(),res.end());
        for(int i = 0;i < res.size();i++){
            cout << res[i] << " ";
        }
        cout << endl;
    }
}

int main(){
    solution();
    return 0;
}