#include<bits/stdc++.h>
using namespace std;
int n;
bool check[1005];// mảng đánh dấu vị trí có công việc đã làm

void faster(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

struct congviec{
    int Jobld,Deadline,Profit;
};

congviec se[1005];

bool cmp(congviec se1,congviec se2){
    return se1.Profit > se2.Profit;
}

void init(){
    cin >> n;
    for(int i = 0;i < n;i++){
        cin >> se[i].Jobld >> se[i].Deadline >> se[i].Profit;
    }
    sort(se,se + n,cmp);
    memset(check,false,sizeof(check));
}

void solution(){
    faster();
    int t;
    cin >> t;
    while(t--){
        init();
        int count_the_work = 0;
        int profit_of_work = 0;
        for(int i = 0;i < n;i++){
// tìm thời gian đầu tiên mà tính từ deadline đến ngày 1 xem vị trị công việc nào chưa làm
            while(check[se[i].Deadline] && se[i].Deadline > 0){
                se[i].Deadline -= 1;
            }
            if(se[i].Deadline > 0){
                check[se[i].Deadline] = true;
                count_the_work++;
                profit_of_work += se[i].Profit;
            }
        }
        cout << count_the_work << " " << profit_of_work << endl;
    }
}

int main(){
    solution();
    return 0;
}