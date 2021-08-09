#include<bits/stdc++.h>
using namespace std;

void faster(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void nhap(list<int> &arr,int n){
    for(int i = 0;i < n;i++){
        int a;
        cin >> a;
        arr.push_back(a);
    }
}

void solution(){
    faster();
    int n,x;
    cin >> n;
    list<int> arr;
    nhap(arr,n);
    cin >> x;
    list<int> new_list;
    list<int>:: iterator it;
    for(it = arr.begin();it != arr.end();it++){
        if(*it != x){
            new_list.push_back(*it);
        }
    }
    for(it = new_list.begin();it != new_list.end();it++){
        cout << *it << " ";
    }
    cout << endl;
}

int main(){
    solution();
    return 0;
}