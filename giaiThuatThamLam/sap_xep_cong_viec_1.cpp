#include<bits/stdc++.h>
using namespace std;
void faster(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

struct data{
    int first,second;
};
data D[1005];

bool compare(data a,data b){
    return a.second < b.second;
}

void solution(){
    faster();
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        for(int i = 0;i < n;i++){
            cin >> D[i].first;
        }
        for(int i = 0;i < n;i++){
            cin >> D[i].second;
        }
// sắp xếp theo thời gian kết thúc công việc
        sort(D,D+n,compare);
        int i = 0,dem = 1;
        for(int j = 1;j < n;j++){
// kiểm tra nếu thời gian bắt đầu công việc thứ 2 >= thời gian kết thúc công việc thứ nhất
            if(D[j].first >= D[i].second){
                dem++,i = j;
// tăng biến đếm, gắn lại thời gian kết thúc công việc thứ i = thời gian bắt đầu công việc thứ j
            }
        }
        cout << dem << endl;
    }
}

int main(){
    solution();
    return 0;
}