#include<bits/stdc++.h>
using namespace std;
int k;

void faster(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void in(vector<int> arr){
    vector<int>:: iterator it;
    for(it = arr.begin();it != arr.end();it++){
        cout << *it;
    }
}

void xu_ly(string &s){
    vector<int> res;
    for(int i = 0;i < s.size();i++){
        res.push_back(s[i] - '0');
    }
    for(int i = 0;i < res.size();i++){
        int max1 = 0,vi_tri = 0;// max1, vi_tri: tìm giá trị và vị trí phần tử lớn nhất
        if(k > 0){
            // tìm phần tử từ cuối lớn nhất và lớn hơn res[i]
            for(int j = res.size() - 1;j > i;j--){
                if(res[j] > max1 && res[j] > res[i]){
                    max1 = res[j];
                    vi_tri = j;
                }
            }
            // tìm được vị trí phần tử đó thì đổi chỗ và giảm biến k đi 1
            if(max1 > res[i]){
                swap(res[vi_tri],res[i]);
                k--;
            } 
        }
        // nếu k hết thì thoát vòng lặp
        else{
            break;
        }
    }
    in(res);
}

void solution(){
    faster();
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> k >> s;
        xu_ly(s);
        cout << endl;
    }
}

int main(){
    solution();
    return 0;
}