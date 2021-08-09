#include<bits/stdc++.h>
using namespace std;
int C[105][105],n;
/* ý tưởng giống bài xâu con chung dài nhất nhưng khác ở chỗ nếu xâu có ký tự giống nhau và vị trí hai
ký tự đó phải khác nhau độ dài xâu con chung tăng lên 1*/ 
void faster(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int day_con_lap_lai(string s){
    memset(C,0,sizeof(C));
    for(int i = 1;i <= n;i++){
        for(int j = 1;j <= n;j++){
            if(s[i-1] == s[j-1] && i!=j){
                C[i][j] = C[i-1][j-1] + 1;
            }
            else{
                C[i][j] = max(C[i-1][j],C[i][j-1]);
            }
        }
    }
    return C[n][n];
}

void solution(){
    faster();
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        cin.ignore();
        string s;
        cin >> s;
        cout << day_con_lap_lai(s) << endl;
    }
}

int main(){
    solution();
    return 0;
}