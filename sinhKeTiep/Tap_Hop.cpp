#include<bits/stdc++.h>
using namespace std;
bool check = true;
/*bài này lưu ý cách nhập input, ý tưởng sinh tổ hợp sau đó check tổng các số mới sinh
nếu bằng tổng đã cho thì in ra*/
void faster(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void in(vector<int> &a){
    vector<int>:: iterator it;
    for(it = a.begin();it != a.end();it++){
        cout << *it << " ";
    }
}

void sinh(vector<int> &a,int n){
    int i = a.size() - 1;
    while(i >= 0 && a[i] == n - a.size() + i + 1){
        i--;
    }
    if(i >= 0){
        a[i]++;
        for(int j = i + 1;j < a.size();j++){
            a[j] = a[i] + j - i;
        }
    }
    else{
        check = false;
    }
}

bool check_tong(vector<int> &a,int s){
    int sum = 0;
    for(int i = 0;i < a.size();i++){
        sum += a[i];
    }
    if(sum == s){
        return true;
    }
    return false;
}

int main(){
    faster();
    while(true){
        int n,k,s;
        cin >> n >> k >> s;
        if(n==0&&k==0&&s==0){
            break;
        }
        else if(n < k){
            cout << 0 << endl;
        }
        else{
            vector<int> a(k);
            for(int i = 0;i < a.size();i++){
                a[i] = i + 1;
            }
            int count = 0;
            while(check == true){
                if(check_tong(a,s) == true){
                    count++;
                }
                sinh(a,n);
            }
            cout << count << endl;
            check = true;
            count = 0;
        }
    }
    return 0;
}