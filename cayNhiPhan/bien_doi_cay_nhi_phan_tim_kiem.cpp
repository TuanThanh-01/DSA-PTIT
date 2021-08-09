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
        int n,first,second;
        char ktu;
        cin >> n;
        set<int> s;
        for(int i = 0;i < n;i++){
            cin >> first >> second >> ktu;
            s.insert(first);
            s.insert(second);
        }
        set<int>:: iterator it;
        for(it = s.begin();it != s.end();it++){
            cout << *it << " ";
        }
        cout << endl;
    }
}

int main(){
    solution();
    return 0;
}