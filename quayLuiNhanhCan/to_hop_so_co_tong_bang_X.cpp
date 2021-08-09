#include<bits/stdc++.h>
using namespace std;
int a[100],n,k;
vector<int> kq;
vector<vector<int> > res;

void faster(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void init(){
    res.clear(),kq.clear();
    cin >> n >> k;
    for(int i = 1;i <= n;i++){
        cin >> a[i];
    }
    sort(a,a+n);
}



void Try(int i,vector<int> kq,int sum){
    if(sum == k){
        res.push_back(kq);
        return;
    }
    for(int j = i;j <= n;j++){
        if(sum + a[j] <= k){
            kq.push_back(a[j]);
            Try(j,kq,sum + a[j]);
            kq.pop_back();
// sau mỗi bước cần phải xóa phần tử cuối đi vì có thể xóa nó đi sẽ cộng được 
//1 số khác cho tổng bằng k
        }
    }
}

void in(){
    for(int i = 0;i < res.size();i++){
        cout << '[';
        for(int j = 0;j < res[i].size() - 1;j++){
            cout << res[i][j] << " ";
        }
        cout << res[i][res[i].size() - 1] << ']';
    }
    cout << endl;
}

void solution(){
    faster();
    int t;
    cin >> t;
    while(t--){
        init();
        Try(1,kq,0);
        if(res.size() == 0){
            cout << -1 << endl;
        }
        else{
            in();
        }
    }
}

int main(){
    solution();
    return 0;
}