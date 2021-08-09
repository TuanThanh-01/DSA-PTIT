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

void in(vector<long long> a){
    vector<long long>:: iterator it;
    for(it = a.begin();it != a.end();it++){
        cout << *it << " ";
    }
}

void xu_ly(vector<long long> &a){
    for(int i = 0;i < a.size() - 1;i++){
        for(int j = i + 1;j < a.size();j++){
            if(a[i] > a[j]){
                swap(a[i],a[j]);
            }
        }
        cout << "Buoc " << i+1 << ": ";
        in(a);
        cout << endl;
    }
}

void solution(){
    int n;
    cin >> n;
    vector<long long> a(n);
    nhap(a);
    xu_ly(a);
}

int main(){
    solution();
    return 0;
}