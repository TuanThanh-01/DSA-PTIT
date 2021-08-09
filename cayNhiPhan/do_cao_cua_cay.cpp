#include<bits/stdc++.h>
using namespace std;

void faster(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solution(){
    faster();
    int t;
    cin >> t;
    while(t--){
        int n,a[100005];
        cin >> n;
        memset(a, 0,sizeof(a));
        for(int i = 0;i < n - 1;i++){
            int u,v;
            cin >> u >> v;
            a[v] = a[u] + 1;
        }
        sort(a, a + n + 1);
        cout << a[n] << endl;
    }
}

int main(){
    solution();
    return 0;
}