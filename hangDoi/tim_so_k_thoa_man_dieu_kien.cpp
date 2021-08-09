#include<bits/stdc++.h>
using namespace std;

void faster(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

bool check_so(int a){
    priority_queue<int> q;
    while(a > 0){
        q.push(a % 10);
        a /= 10;
    }
    if(q.top() > 5){
        return false;
    }
    while(q.size() > 1){
        int s = q.top();q.pop();
        if(s == q.top()){
            return false;
        }
    }
    return true;
}

void solution(){
    faster();
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        int dem1 = 0;
        for(int i = n;i <= m;i++){
            if(check_so(i) == true){
                dem1++;
            }
        }
        cout << dem1 << endl;
    }
}

int main(){
    solution();
    return 0;
}