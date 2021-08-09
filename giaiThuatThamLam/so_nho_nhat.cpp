#include<bits/stdc++.h>
using namespace std;

void faster(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void in(vector<int> arr){
    vector<int>:: iterator it;
    for(it = arr.begin();it != arr.end();it++){
        cout << *it;
    }
}
/* ý tưởng:cho vòng lặp chạy đến d, xét tổng s > 9 thì gán vào mảng a rồi in ra
đảo ngược mảng, nếu phần tử mảng đầu tiên = 0 thì gắn nó bằng 1 và trừ phần tử 
tiếp theo đi 1 đơn vị */
void xu_ly(int s,int d){
    vector<int> kq;
    for(int i = 0;i < d;i++){
        if(s > 9){
            kq.push_back(9);
            s -= 9;
        }
        else{
            kq.push_back(s);
            s = 0;
        }
    }
    reverse(kq.begin(),kq.end());
    if(kq.at(0) == 0){
        kq.at(0) = 1;
// kiểm tra các phần tử phía sau nếu phần tử nào khác 0 thì giảm đi 1 đơn vị
        for(int i = 1;i < kq.size();i++){
            if(kq.at(i) != 0){
                kq.at(i) -= 1;
                break;
            }
        }
    }
    in(kq);
}

void solution(){
    faster();
    int t;
    cin >> t;
    while(t--){
        int s,d;
        cin >> s >> d;
        if(9 * d < s){
            cout << -1;
        }
        else{
            xu_ly(s,d);
        }
        cout << endl;
    }
}

int main(){
    solution();
    return 0;
}