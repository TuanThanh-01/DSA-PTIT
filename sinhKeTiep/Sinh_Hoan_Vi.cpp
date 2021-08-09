#include<bits/stdc++.h>
using namespace std;
bool check = true;

void faster(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

void in(vector<long long> a){
    vector<long long>:: iterator it;
    for(it = a.begin();it != a.end();it++) {
        cout << *it;
    }
}

void sinh(vector<long long> &a){
    int i = a.size() - 2;
    while(i >= 0 && a[i] > a[i + 1]) {
        i--;
    }
    if(i < 0) {
        check = false;
    }
    int k = a.size() - 1;
    while(a[k] < a[i]) {
        k--;
    }
    swap(a[i],a[k]);
    int l = i + 1,r = a.size() - 1;
    while(l <= r){
        swap(a[l],a[r]);
        l++,r--;
    }
}

void solution() {
    faster();
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        for(int i = 0;i < a.size();i++) {
            a[i] = i + 1;
        }
        while(check == true){
            in(a);
            sinh(a);
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