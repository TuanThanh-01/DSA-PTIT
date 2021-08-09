#include<bits/stdc++.h>
using namespace std;
int pre[1005];

void faster(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void xu_ly(int n){
    stack<int> st;
    int dem = 1;
    for(int i = 0;i < n - 1;i++){
        bool check = false;
        if(pre[i] > pre[i + 1]) st.push(pre[i]);
        else{
            while(!st.empty()){
                if(pre[i + 1] > st.top()){
                    st.pop();
                    check = true;
                }
                else{
                    break;
                }
            }
            if(check) dem++;
        }
    }
    cout << n - dem << endl;
}

void solution(){
    faster();
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        for(int i = 0;i < n;i++){
            cin >> pre[i];
        }
        xu_ly(n);
    }
}

int main(){
    solution();
    return 0;
}