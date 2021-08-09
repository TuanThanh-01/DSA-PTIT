#include<bits/stdc++.h>
using namespace std;
int a[1005][1005];

void faster(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solution(){
    faster();
    int n;
    cin >> n;
    cin.ignore();
    for(int i = 1;i <= n;i++){
        string s;
        getline(cin,s);
        istringstream iss(s);
        while(iss){
            int u;
            iss >> u;
            if(iss){
                a[i][u] = 1;
            }
        }
    }

    for(int i = 1;i <= n;i++){
        for(int j = 1;j <= n;j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

int main(){
    solution();
    return 0;
}