#include<bits/stdc++.h>
using namespace std;
int F[105][105];
string s1,s2;
// F[M][N] la so phep bien doi it nhat voi M phan tu s1 va N phan tu s2
// F[i][j] la so phep bien doi it nhat voi i phan tu s1 va j phan tu s2
// Neu s1[i] == s2[j] thi F[i][j] = F[i-1][j-1];
// else thi F[i][j] = min (F[i][j-1],F[i-1][j],F[i-1][j-1]) + 1
/* F[0][i] = F[i][0] = i là khởi tạo điều kiện ban đầu của QHD
với số cách biến đổi xâu s1 0 ký tự thành s2 có i ký tự  bằng i và ngược lại */ 


void faster(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int QHD(){
    for(int i = 1;i <= s1.size();i++){
        F[i][0] = i;
    }
    for(int j = 1;j <= s2.size();j++){
        F[0][j] = j;
    }
    for(int i = 1;i <= s1.size();i++){
        for(int j = 1;j <= s2.size();j++){
            if(s1[i-1] == s2[j-1]){
                F[i][j] = F[i-1][j-1];
            }
            else{
                F[i][j] = min(F[i-1][j-1],min(F[i-1][j],F[i][j-1])) + 1;
            }
        }
    }
    return F[s1.size()][s2.size()];
}

void solution(){
    faster();
    int t;
    cin >> t;
    while (t--){
        cin >> s1 >> s2;
        memset(F,0,sizeof(F));
        cout << QHD() << endl;
    }    
}

int main(){
    solution();
    return 0;
}