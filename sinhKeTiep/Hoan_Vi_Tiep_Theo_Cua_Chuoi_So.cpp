#include<bits/stdc++.h>
using namespace std;

void faster(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

void sinh_ke_tiep(string &a,long long m){
    int i = a.size() - 2;
    while(i >= 0 && a[i] >= a[i+1]){
        i--;
    }
    if(i >= 0){
        int k = a.size() - 1;
        while(a[k] <= a[i]){
            k--;
        }
        swap(a[k],a[i]);
        int l = i + 1, r = a.size() - 1;
        while(l <= r){
            swap(a[l],a[r]);
            l++,r--;
        }
        cout << m << " " << a << endl;
    }
    else{
        cout << m << " " << "BIGGEST" << endl;
    }
}

void solution(){
    faster();
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        cin.ignore();
        string a;
        cin >> a;
        sinh_ke_tiep(a,n);
    }
}

int main(){
    solution();
    return 0;
}