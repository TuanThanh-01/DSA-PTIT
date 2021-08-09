#include<bits/stdc++.h>
using namespace std;
int F[105][105][105],n,m,z;
string s1,s2,s3;
// giống bài 2 xâu chung dài nhất
void faster(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void init(){
    cin >> n >> m >> z;
    cin >> s1 >> s2 >> s3;
}

int QHD(){
    memset(F,0,sizeof(F));
    for(int i = 1;i <= n;i++){
        for(int j = 1;j <= m;j++){
            for(int k = 1;k <= z;k++){
                if(s1[i-1] == s2[j-1] && s2[j-1] == s3[k-1]){
                    F[i][j][k] = F[i-1][j-1][k-1] + 1;
                }
                else{
                    F[i][j][k] = max(F[i-1][j][k],max(F[i][j-1][k],F[i][j][k-1]));
                }
            }
        }
    }
    return F[n][m][z];
}

void solution(){
    faster();
    int t;
    cin >> t;
    while(t--){
        init();
        cout << QHD() << endl;
    }
}

int main(){
    solution();
    return 0;
}