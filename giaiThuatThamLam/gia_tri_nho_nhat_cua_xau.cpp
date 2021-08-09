#include<bits/stdc++.h>
using namespace std;
/*ý tưởng: ta đếm số lần xuất hiện của các chữ cái trong xâu rồi cho vào hàng đợi ưu tiên 
để xử lý*/
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
        cin.ignore();
        int k;
        string s;
        cin >> k >> s;
        vector<int> a(s.size() + 300,0);
        for(int i = 0;i < s.size();i++){
            a[s[i]]++;
        }
        priority_queue<int, vector<int> > arr;
        for(int i = 0;i < s.size();i++){
            if(a[s[i]] > 0){
                arr.push(a[s[i]]);
                a[s[i]] = 0;// gắn lại giá trị bằng 0 để tránh trùng các phần tử trong hàng đợi
            }
        }
        for(int i = 0;i < k;i++){
            int tam = arr.top();arr.pop();
            tam--;
            arr.push(tam);
        }
        long res = 0;
        while(arr.size()){
            res += pow(arr.top(),2);
            arr.pop();
        }
        cout << res << endl;
    }
}

int main(){
    solution();
    return 0;
}