#include<bits/stdc++.h>
using namespace std;

void faster(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
/*ví dụ 01101 ghi 0 vào gray sau đó so sánh chéo như ví dụ dưới nếu 2 số giống nhau
thì thêm 0 và khác nhau thì thêm 1 
  0 1 1 0 1
   / / / /
  0 1 0 0 1
*/
void xu_ly(string &a){
    string res;
    res.push_back(a[0]);
    for(int i = 0;i < a.size() - 1;i++){
        if(res[i] == a[i + 1]){
            res.push_back('0');
        }
        else{
            res.push_back('1');
        }
    }
    cout << res << endl;
}

void solution(){
    faster();
    int t;
    cin >> t;
    while(t--){
        string a;
        cin >> a;
        xu_ly(a);
    }
}

int main(){
    solution();
    return 0;
}