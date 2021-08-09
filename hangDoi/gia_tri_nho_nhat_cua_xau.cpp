#include<bits/stdc++.h>
using namespace std;
int dem[30];

void faster(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

long long xu_ly(string s,int k){
    for(int i = 0;i < s.size();i++){
        dem[s[i] - 'A']++;
    }
    priority_queue<int> q;
    for(int i = 0;i < 30;i++){
        if(dem[i] != 0){
            q.push(dem[i]);
        }
    }
    long long res = 0;
    while(k--){
        int tmp = q.top();q.pop();
        tmp--;
        q.push(tmp);
    }
    while(!q.empty()){
        long long t = q.top();q.pop();
        res = res + pow(t,2);
    }
    return res;
}

void solution(){
    faster();
    int t;
    cin >> t;
    while(t--){
        memset(dem,0,sizeof(dem));
        int k;
        string s;
        cin >> k >> s;
        cout << xu_ly(s,k) << endl;
    }
}

int main(){
    solution();
    return 0;
}