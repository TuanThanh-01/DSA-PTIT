#include<bits/stdc++.h>
using namespace std;

void faster(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void xu_ly(string &a,string &b){
    long long res1 = 0,res2 = 0;
    int p = 0,k = 0;
    for(int i = a.size() - 1;i >= 0;i--){
        res1 += pow(2,p)*(a[i] - '0');
        p++; 
    }
    for(int j = b.size() - 1;j >= 0;j--){
        res2 += pow(2,k)*(b[j] - '0');
        k++;
    }
    cout << res1 * res2 << endl;
}

void solution(){
    faster();
    int t;
    cin >> t;
    while(t--){
        cin.ignore();
        string a,b;
        cin >> a >> b;
        xu_ly(a,b);
    }
}

int main(){
    solution();
    return 0;
}