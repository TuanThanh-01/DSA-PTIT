#include<bits/stdc++.h>
using namespace std;
/*ý tưởng: ta cộng 2 số như bình thường nhưng khác ở chỗ đây là cộng 2 số vs cơ số k có thể nhìn VD dưới
giả sử có a = 125 b = 235 vs hệ cơ số 10 thì lấy 5 + 5 = 10 lấy 0 dư 1. tương tự vậy hệ số k 
thì phần dư = kết qua sau mỗi lần cộng / k và lấy sẽ là kết quả sau mỗi lần cộng % k;
*/
void faster(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void them_do_dai(string &a,string &b){
    while(a.size() < b.size()){
        a = '0' + a;
    }
    while(b.size() < a.size()){
        b = '0' + b;
    }
}

void cong(string &a,string &b,int k){
    vector<int> res;
    them_do_dai(a,b);
    if(a < b){
        swap(a,b);
    }
    int nho = 0,kq = 0;
    for(int i = a.size() - 1;i >= 0;i--){
        kq = (a[i] - '0') + (b[i] - '0') + nho;
        res.push_back(kq % k);
        nho = kq / k;
    }
    if(nho > 0){
        res.push_back(nho);
    }
    reverse(res.begin(),res.end());
    vector<int>:: iterator it;
    for(it = res.begin();it != res.end();it++){
        cout << *it;
    }
}

void solution(){
    faster();
    int t;
    cin >> t;
    while(t--){
        string a,b;
        int k;
        cin >> k >> a >> b;
        cong(a,b,k);
        cout << endl;
    }
}

int main(){
    solution();
    return 0;
}