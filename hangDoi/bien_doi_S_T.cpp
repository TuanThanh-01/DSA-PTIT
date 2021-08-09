#include<bits/stdc++.h>
using namespace std;

void faster(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

struct data
{
    int value;
    int dem;
};


void bien_doi_S_T(int a, int b){
    set<int> se;
    se.insert(a);
    queue<data> q;
    q.push({a,0});
    while(!q.empty()){
        data s = q.front();
        q.pop();
        if(s.value == b){
            cout << s.dem << endl;
            break;
        }
        if(s.value * 2 == b || s.value - 1 == b){
            cout << s.dem + 1 << endl;
            break;
        }
        if(s.value < b && se.find(s.value * 2) == se.end()){
            q.push({s.value * 2, s.dem + 1});
            se.insert(s.value * 2);
        }
        if(s.value - 1 > 0 && se.find(s.value -1) == se.end()){
            q.push({s.value - 1, s.dem + 1});
            se.insert(s.value - 1);
        }
    }
}

void solution(){
    faster();
    int t;
    cin >> t;
    while(t--){
        int a,b;
        cin >> a >> b;
        bien_doi_S_T(a,b);
    }
}

int main(){
    solution();
    return 0;
}