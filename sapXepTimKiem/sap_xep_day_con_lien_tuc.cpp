#include<bits/stdc++.h>
using namespace std;

void faster(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

void nhap(vector<long long> &a){
    vector<long long>:: iterator it;
    for(it = a.begin();it != a.end();it++){
        cin >> *it;
    }
}
/* ý tưởng: so sánh mảng a ban đầu với mảng a đã được sắp xếp, nếu khác nhau ở đâu sẽ trả về vị trí
khác nhau */

void xu_ly(vector<long long> a){
    vector<long long> b;
    for(int i = 0;i < a.size();i++){
        b.push_back(a[i]);
    }
    sort(b.begin(),b.end());
    int l,r;
    for(int i = 0;i < a.size();i++){
        if(a[i] != b[i]){
            l = i + 1;
            break;
        }
    }
    for(int j = a.size() - 1;j >= 0;j--){
        if(a[j] != b[j]){
            r = j + 1;
            break;
        }
    }

    cout << l << " " << r << endl;
}

void solution(){
    faster();
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        vector<long long> a(n);
        nhap(a);
        xu_ly(a);
    }
}

int main(){
    solution();
    return 0;
}