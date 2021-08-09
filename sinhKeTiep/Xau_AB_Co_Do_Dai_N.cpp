#include<bits/stdc++.h>
using namespace std;
bool check = true;

void faster() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

void in(vector<char> a){
    vector<char>:: iterator it;
    for(it = a.begin();it != a.end();it++) {
        cout << *it;
    }
}

void sinh(vector<char> &a){
    int i = a.size() - 1;
    while(i >= 0 && a[i] != 'A') {
        a[i] = 'A';
        i--;
    }
    if(i >= 0){
        a[i] = 'B';
    }
    else{
        check = false;
    }
}

void solution() {
    faster();
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<char> a(n);
        for(int i = 0;i < a.size();i++) {
            a[i] = 'A';
        }
        while(check == true) {
            in(a);
            sinh(a);
            cout << " ";
        }
        cout << endl;
        check = true;
    }
}

int main() {
    solution();
    return 0;
}