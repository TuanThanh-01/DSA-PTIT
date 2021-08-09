#include<bits/stdc++.h>
using namespace std;
int C[1005][1005];
//C[i][j] là độ dài xâu lớn nhất tính đến ký tự thứ i của xâu s1 và ký tự thứ j của xâu s2
void faster(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int qhd(string &s1,string &s2){
    memset(C,0,sizeof(C));
    int res = 0;
    for(int i = 1;i <= s1.size();i++){
        for(int j = 1;j <= s2.size();j++){
            if(s1[i-1] == s2[j-1]){
//bổ sung xi vào dãy con chung dài nhất của hai dãy Xi-1và Yj-1
                C[i][j] = C[i-1][j-1] + 1;
            }
            else{
//dãy con chung dài nhất của Xi và Yj sẽ là dãy con dài hơn trong hai dãy
//con chung dài nhất của (Xi-1 và Yi) và của (Xi và Yj-1) .
                C[i][j] = max(C[i-1][j],C[i][j-1]);
            }
        }
    }
    return C[s1.size()][s2.size()];
}

void solution(){
    faster();
    int t;
    cin >> t;
    while(t--){
        string s1,s2;
        cin >> s1 >> s2;
        cout << qhd(s1,s2) << endl;
    } 
}

int main(){
    solution();
    return 0;
}