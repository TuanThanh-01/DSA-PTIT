#include<bits/stdc++.h>
using namespace std;
long long res;
int m,n;
bool check;
vector<int> a(100);

void faster(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void Try(int i){
    for(int j = 0;j <= 1;j++){
        a[i] = j;
        if(i == m){
            long long sum = 0;
            for(int k = 1;k <= m;k++){
                sum = 10*sum + a.at(k);
            }
            sum *= 9;
            if(sum % n == 0 && sum >= n){
                res = min(res,sum);
                check = false;
            }
        }
        else Try(i+1);
    }
}

void solution(){
    faster();
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        m = 1;
        res = 10000000000000;
        check = true;
        while(m <= 15 && check == true){
            Try(1);
            m++;
        }
        cout << res << endl;
    }
}

int main(){
    solution();
    return 0;
}