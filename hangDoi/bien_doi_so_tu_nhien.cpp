#include<bits/stdc++.h>
using namespace std;

void faster(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

struct data{
    int value;
    int dem;
};

void bienDoiSoTuNhien(int a){
    set<int> s;
    s.insert(a);
    queue<data> q;
    q.push({a,0});
    while(!q.empty()){
        data tmp = q.front();q.pop();
        if(tmp.value == 1){
            cout << tmp.dem << endl;
            break;
        }
        if(tmp.value - 1 == 1){
            cout << tmp.dem +1 << endl;
            break;
        }
        if(tmp.value - 1 > 0 && s.find(tmp.value - 1) == s.end()){
            s.insert(tmp.value - 1);
            q.push({tmp.value - 1, tmp.dem + 1});
        }
        for(int i = 2;i * i <= tmp.value;i++){
            if(tmp.value % i == 0){
                if(s.find(tmp.value/ i) == s.end()){
                    q.push({tmp.value/i,tmp.dem + 1});
                    s.insert(tmp.value / i);
                }
            }
        }
    }
}

void solution(){
    faster();
    int t;
    cin >> t;
    while(t--){
        int a;
        cin >> a;
        bienDoiSoTuNhien(a);
    }
}

int main(){
    solution();
    return 0;
}