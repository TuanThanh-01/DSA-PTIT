#include<bits/stdc++.h>
using namespace std;
bool check = true;
int arr[100],k;
void faster(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void in(){
    cout << "(";
    for(int i = 1;i <= k;i++){
        cout << arr[i];
        if(i < k){
            cout << " ";
        }
        else{
            cout << ")";
        }
    }
}

void sinh(){
    int i = k,R,S,D;
    while(i > 0 && arr[i] == 1){
        i--;
    }
    arr[i]--;
    D = k - i + 1;
    R = D / arr[i];
    S = D % arr[i];
    k = i;
    if(i > 0){
        if(R > 0){
            for(int j = i + 1;j <= i + R;j++){
                arr[j] = arr[i];
            }
            k = k + R;
        }
        if(S > 0){
            k++;
            arr[k] = S;
        }
    }
    else{
        check = false;
    }
}

void solution(){
    faster();
    int t;
    cin >> t;
    while(t--){
        check = true;
        int n;
        cin >> n;
        k = 1;
        arr[k] = n;
        int dem = 0;
        while(check == true){
            dem++;
            sinh();
        }
        cout << dem << endl;
        check = true;
        memset(arr,0,sizeof(arr));
        k = 1;
        arr[k] = n;
        while(check == true){
            in();
            sinh();
            cout << " ";
        }
        cout << endl;
    }
}

int main(){
    solution();
    return 0;
}