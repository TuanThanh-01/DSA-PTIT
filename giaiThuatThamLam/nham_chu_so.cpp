#include<bits/stdc++.h>
using namespace std;

void faster() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

long long doi_so5(string &a){
    for(int i = 0;i < a.size();i++) {
        if(a[i] == '6'){
            a[i] = '5';
        }
    }
    long long res = 0;
    for(int i = 0;i < a.size();i++){
        res = (res * 10) + (a[i] - '0');
    }
    return res;
}

long long doi_so6(string &a){
    for(int i = 0;i < a.size();i++) {
        if(a[i] == '5'){
            a[i] = '6';
        }
    }
    long long res = 0;
    for(int i = 0;i < a.size();i++){
        res = (res * 10) + (a[i] - '0');
    }
    return res;
}


void solution(){
    faster();
    string a,b;
    cin >> a >> b;
    long long min1,min2,max1,max2;
    min1 = doi_so5(a);
    min2 = doi_so5(b);
    max1 = doi_so6(a);
    max2 = doi_so6(b);
    cout << min1 + min2 << " " << max1 + max2 << endl;
}

int main() {
    solution();
    return 0;
}