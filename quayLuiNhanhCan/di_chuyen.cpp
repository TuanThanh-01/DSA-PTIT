#include<bits/stdc++.h>
using namespace std;
int a[100][100],n,dem = 0;
vector<string> res;
string s;
/*ý tưởng giống bài DSA02003*/

void faster(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void nhap(){
    for(int i = 1;i <= n;i++){
        for(int j = 1;j <= n;j++){
            cin >> a[i][j];
        }
    }
}

void Try(int i,int j,string s){
    if(a[1][1] == 0 || a[n][n] == 0){
        return;
    }
    if(i == n && j == n && a[n][n] == 1){
        res.push_back(s);
        dem++;
        return;
    }
    if(i < n && a[i+1][j] == 1){
        Try(i+1,j,s+"D");
    }
    if(j < n && a[i][j+1] == 1){
        Try(i,j+1,s+"R");
    }
}

void in(vector<string> a){
    vector<string>:: iterator it;
    for(it = a.begin();it != a.end();it++){
        cout << *it << " ";
    }
}

void solution(){
    faster();
    int t;
    cin >> t;
    while(t--){
        res.clear();
        cin >> n;
        nhap();
        Try(1,1,"");
        if(dem == 0){
            cout << - 1;
        }
        else{
            in(res);
        }
        dem = 0;
        cout << endl;
    }
}

int main(){
    solution();
    return 0;
}