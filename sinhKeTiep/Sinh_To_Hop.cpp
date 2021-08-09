#include<bits/stdc++.h>
using namespace std;
bool check = true;

void faster() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

void in(vector<long long> a) {
    vector<long long>:: iterator it;
    for(it = a.begin();it != a.end();it++) {
        cout<< *it;
    }
}

void sinh(vector<long long> &a,int n){
    int i = a.size() - 1;
    while(i >= 0 && a[i] == n - a.size() + i + 1){
        i--;
    }
    if(i < 0) {
        check = false;
    }
    else{
        a[i]++;
        for(int j = i + 1;j < a.size();j++){
            a[j] = a[i] + j - i;
        }
    }
}

void solution() {
    faster();
    int t;
    cin >> t;
    while(t--) {
        int n,k;
        cin >> n >> k;
        vector<long long> a(k);
        for(int i = 0;i < a.size();i++) {
            a[i] = i + 1;
        }
        while(check == true) {
            in(a);
            sinh(a,n);
            cout << " ";
        }
        check = true;
        cout << endl;
    }
}

int main() {
    solution();
    return 0;
}