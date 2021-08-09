#include<bits/stdc++.h>
using namespace std;
vector<int> a(100);
vector<bool> check(100);
string s;
void faster(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

/*ý tưởng: tạo một mảng đánh dấu vị trí
ví dụ xâu ABC
    A         B          C
   / \       / \        / \
  B   C     A   C      A   B
 /     \   /     \    /     \
C       B C       A  B       A
   */
void Try(int i){
    for(int j = 0;j < s.size();j++){
        if(check[j]){
            a[i] = j,check[j] = false;
            if(i == s.size()){
                for(int k = 1;k <= s.size();k++){
                    cout << s[a[k]];
                }
                cout << " ";
            }
            else Try(i+1);
            check[j] = true;
        }
    }
}

void solution(){
    faster();
    int t;
    cin >> t;
    while(t--){
        cin >> s;
        for(int i = 0;i < s.size();i++){
            check[i] = true;
        }
        Try(1);
        cout << endl;
    }
}

int main(){
    solution();
    return 0;
}