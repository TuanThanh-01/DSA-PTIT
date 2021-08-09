#include<bits/stdc++.h>
using namespace std;
bool check = true;
void faster(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void sinh(vector<char> &a){
    int i = a.size() - 1;
    while(i >= 0 && a[i] != 'A'){
        a[i] = 'A';
        i--;
    }
    if(i < 0){
        check = false;
    }
    else{
        a[i] = 'H';
    }
}

bool kiem_tra(vector<char> a){
    if(a[0] != 'H' || a[a.size() - 1] == 'H'){
        return false;
    }
    for(int i = 0;i < a.size() - 1;i++){
        if(a[i] == 'H' && a[i + 1] == 'H'){
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
        check = true;
        int n;
        cin >> n;
        vector<char> a(n);
        for(int i = 0;i < a.size();i++){
            a[i] = 'A';
        }
        while(check){
            if(kiem_tra(a) == true){
                for(int i = 0;i < a.size();i++){
                    cout << a[i];
                }
                cout << endl;
            }
            sinh(a);
        }
    }
}

int main(){
    solution();
    return 0;
}