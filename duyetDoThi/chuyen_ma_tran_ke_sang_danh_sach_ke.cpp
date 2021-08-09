#include<bits/stdc++.h>
using namespace std;
int a[1005][1005],n;
vector<int> arr[1005];

void faster(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void init(){
    cin >> n;
    for(int i = 1;i <= n;i++){
        for(int j = 1;j <= n;j++){
            cin >> a[i][j];
        }
    }
}

void xu_ly(){
    for(int i = 1;i <= n;i++){
        for(int j = 1;j <= n;j++){
            if(a[i][j] == 1){
                arr[i].push_back(j);
            }
        }
    }
    for(int i = 1;i <= n;i++){
        for(int j = 0;j < arr[i].size();j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

}

void solution(){
    faster();
    init();
    xu_ly();
}

int main(){
    solution();
    return 0;
}