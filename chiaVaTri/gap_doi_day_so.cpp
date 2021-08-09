#include<bits/stdc++.h>
using namespace std;
/*ý tưởng: ta sử dụng chia để trị chia nhỏ từng phần nếu vị trí k nhỏ hơn vị trí trung tâm ta xét
nửa trước của dãy còn nếu k > vị trí trung tâm vì dãy đối xứng vs nhau qua phần tử trung tâm nên phần
tử k lúc này sẽ trừ đi vị trí trung tâm*/
void faster(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
// với n-1 phép biến đổi thì giá trị lớn nhất sinh ra được là n
int de_quy(int n,long long k){
    if(n == 0) return 1;
    long long x = pow(2,n-1);// vị trí ở phần tử trung tâm
    if(k == x) return n;// trả về phần tử nằm ở vị trí thứ k
    if(k < x) return de_quy(n-1,k);
    return de_quy(n-1,k-x);
}

void solution(){
    faster();
    int t;
    cin >> t;
    while(t--){
        int n;
        long long k;
        cin >> n >> k;
        cout << de_quy(n,k) << endl;
    }
}

int main(){
    solution();
    return 0;
}