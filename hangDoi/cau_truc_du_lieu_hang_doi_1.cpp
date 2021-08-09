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
        int k;
        cin >> k;
        queue<int> q;
        while(k--){
            int i;
            cin >> i;
            if(i == 1){
                cout << q.size() << endl;
            }
            else if(i == 2){
                if(q.empty()){
                    cout << "YES" << endl;
                }
                else{
                    cout << "NO" << endl;
                }
            }
            else if(i == 3){
                int l;
                cin >> l;
                q.push(l);
            }
            else if(i == 4){
                if(!q.empty()){
                    q.pop();
                }
            }
            else if(i == 5){
                if(!q.empty()){
                    cout << q.front() << endl;
                }
                else{
                    cout << -1 << endl;
                }
            }
            else if(i == 6){
                if(!q.empty()){
                    cout << q.back() << endl;
                }
                else{
                    cout << -1 << endl;
                }
            }
        }
    }
}

int main(){
    solution();
    return 0;
}