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

void sinh(vector<long long> &a,long long n){
    int i = a.size() - 1;
    while(i >= 0 && a[i] == n - a.size() + i + 1){
        i--;
    }
    if(i >= 0){
        a[i]++;
        for(int j = i + 1;j < a.size();j++){
            a[j] = a[i] + j - i;
        }
    }
}
/*ý tưởng: có mảng a, lưu mảng đó vào mảng b, sinh mảng a, so sánh từng phần tử của mảng a vs mảng b
để tìm số phần tử trùng nhau, số phần tử khác nhau sẽ bằng số phần tử mảng trừ đi số phần tử trùng nhau*/
void solution(){
    faster();
    int t;
    cin >> t;
    while(t--){
        long long n,k;
        cin >> n >> k;
        vector<long long> a(k);
        nhap(a);
        vector<long long> b;
        for(int i = 0;i < a.size();i++){
            b.push_back(a[i]);
        }
        sinh(a,n);
        long long count = 0;
        for(int i = 0;i < a.size();i++){
            for(int j = 0;j < b.size();j++){
                if(a[i] == b[j]){
                    count++;
                }
            }
        }
        if(count != k){
            cout << k - count << endl;
        }
        else{
            cout << k << endl;
        }
    }

}

int main(){
    solution();
    return 0;
}