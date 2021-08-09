#include<bits/stdc++.h>
using namespace std;
void faster(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

void xu_ly(string &a) {
    int i = a.size() - 1;
    //tìm từ trái qua phải xem phần từ nào bằng 1 thì gắn = 0;
    while(i >= 0 && a[i] == '1') {
        a[i] = '0';
        i--;
    }
    if(i >= 0) {
        a[i] = '1';
    }
}

void solution() {
    faster();
    int t;
    cin >> t;
    while(t--) {
        string a;
        cin >> a;
        xu_ly(a);
        cout << a << endl;
    }
}

int main() {
    solution();
    return 0;
}