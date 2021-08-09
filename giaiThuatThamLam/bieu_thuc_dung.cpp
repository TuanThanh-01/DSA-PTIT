#include<bits/stdc++.h>
using namespace std;

void faster(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void xu_ly(string s){
    int dem = 0, dong = 0, mo = 0;
    for(int i = 0;i < s.size();i++){
        if(s[i] == '['){
            mo++;
        }
        else dong++;
        if(dong > mo){
            for(int j = i+1;j < s.size();j++){
                if(s[i] != s[j]){
                    swap(s[i],s[j]);
                    dem += j - i;
                    mo++,dong--;
                    break;
                }
            }
        }
    }
    cout << dem << endl;
}

void solution(){
    faster();
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        xu_ly(s);
    }
}

int main(){
    solution();
    return 0;
}