#include<bits/stdc++.h>
using namespace std;
bool check = true;

void faster(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

void in(vector<long long> a){
    vector<long long>:: iterator it;
    for(it = a.begin();it != a.end();it++){
        cout << *it;
    }
}

void sinh(vector<long long> &a){
    int i = a.size() - 1;
    while(i >= 0 && a[i] != 0){
        a[i] = 0;
        i--;
    }
    if(i >= 0) {
        a[i] = 1;
    }
    else{
        check = false;
    }
}

bool check_count(vector<long long> &a,int k){
    long long count1 = 0;
    for(int i = 0;i < a.size();i++){
        if(a[i] == 1){
            count1++;
        }
    }
    if(count1 == k){
        return true;
    }
    else{
        return false;
    }
}

void solution(){
    faster();
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        vector<long long> a(n);
        for(int i = 0;i < a.size();i++){
            a[i] = 0;
        }
        while(check == true){
            if(check_count(a,k) == true){
                in(a);
                cout << endl;
            }
            sinh(a);
        }
        check = true;
    }
}

int main(){
    solution();
    return 0;
}