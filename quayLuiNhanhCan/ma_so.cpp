#include<bits/stdc++.h>
using namespace std;
char a[100] = {'0','A','B','C','D','E','F','G','H'};
int b[100],c[100],n;
bool check[100],chuaxet[100];
vector<long long> res;
vector<string> res1;

void faster(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void Try(int i){
    for(int j = 1;j <= n;j++){
        if(check[j]){
            b[i] = j;
            if(i == n){
                long long kq = 0;
                for(int l = 1;l <= n;l++){
                    kq = kq * 10 + b[l];
                }
                res.push_back(kq);
            }
            else Try(i + 1);
        }
    }
}

void DQ(int i){
    for(int j = 1;j <= n;j++){
        if(chuaxet[j]){
            c[i] = j;
            chuaxet[j] = false;
            if(i == n){
                string tmp = "";
                for(int l = 1;l <= n;l++){
                    tmp += a[c[l]];
                }
                res1.push_back(tmp);
            }
            else DQ(i + 1);
            chuaxet[j] = true;
        }
    }
}

void solution(){
    faster();
    cin >> n;
    memset(check,true,sizeof(check));
    memset(chuaxet,true,sizeof(chuaxet));
    Try(1);
    DQ(1);
    for(int i = 0;i < res1.size();i++){
        for(int j = 0;j < res.size();j++){
            cout << res1[i] << res[j] << endl;
        }
    }
}

int main(){
    solution();
    return 0;
}