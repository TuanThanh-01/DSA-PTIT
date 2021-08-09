#include<bits/stdc++.h>
using namespace std;
long long L[100];
int n;
// ý tưởng giống bài bậc thang
void faster(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

long long so_buoc(){
    L[0] = L[1] = 1;
    L[2] = 2;
    L[3] = 4;
    for(int i = 4;i <= n;i++){
        L[i] = L[i-1] + L[i-2] + L[i-3];
    }
    return L[n];
}

void solution(){
    faster();
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        memset(L,0,sizeof(L));
        cout << so_buoc() << endl;
    }
}

int main(){
    solution();
    return 0;
}