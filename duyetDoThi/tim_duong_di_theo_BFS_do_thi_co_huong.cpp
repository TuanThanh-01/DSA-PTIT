#include<bits/stdc++.h>
using namespace std;
vector<int> arr[1005];
bool check[1005];
int n,m,t,s,truoc[1005];


void faster(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void BFS(int u){
    queue<int> q;
    q.push(u);
    check[u] = false;
    while(!q.empty()){
        int s = q.front();
        q.pop();
        for(int i = 0;i < arr[s].size();i++){
            if(check[arr[s][i]]){
                q.push(arr[s][i]);
                check[arr[s][i]] = false;
                truoc[arr[s][i]] = s;
            }
        }
    }
}

void solution(){
    faster();
    int l;
    cin >> l;
    while(l--){
        memset(check,true,sizeof(check));
        memset(truoc,0,sizeof(truoc));
        for(int i = 1;i <= n;i++){
            arr[i].clear();
        }
        cin >> n >> m >> t >> s;
        for(int i = 1;i <= m;i++){
            int u,v;
            cin >> u >> v;
            arr[u].push_back(v);
        }
        BFS(t);
        if(truoc[s] == 0){
            cout << -1 << endl;
        }
        else{
            vector<int> res;
            int j = s;
            res.push_back(s);
            while(truoc[j] != t){
                res.push_back(truoc[j]);
                j = truoc[j];
            }
            res.push_back(t);
            reverse(res.begin(),res.end());
            for(int i = 0;i < res.size();i++){
                cout << res[i] << " ";
            }
            cout << endl;
        }
    }
}

int main(){
    solution();
    return 0;
}