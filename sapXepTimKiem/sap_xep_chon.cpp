#include<bits/stdc++.h>
using namespace std;
/*
ý tưởng: Chọn phần tử nhỏ nhất trong n phần tử ban đầu, đưa phần tử này về vị trí đúng 
là đầu tiên của dãy hiện hành. Sau đó không quan tâm đến nó nữa, xem dãy hiện hành chỉ
còn n-1 phần tử của dãy ban đầu, bắt đầu từ vị trí thứ 2. Lặp lại quá trình trên cho dãy 
hiện hành đến khi dãy hiện hành chỉ còn 1 phần tử.
- độ phức tạp thời gian: O(n^2)
*/
void faster(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

void nhap(vector<long long> &a){
    vector<long long>:: iterator it;
    for(it = a.begin();it != a.end();it++){
        cin >> *it;
    }
}

void in(vector<long long> a){
    vector<long long>:: iterator it;
    for(it = a.begin();it != a.end();it++){
        cout << *it << " ";
    }
}

void selection_sort(vector<long long> a){
    for(int i = 0;i < a.size() - 1;i++){
        int index = i;
        for(int j = i + 1;j < a.size();j++){
            if(a[j] < a[index]){
                index = j;
            }
        }
        swap(a[index],a[i]);
        cout << "Buoc " << i + 1 << ": ";
        in(a);
        cout << endl;
    }
}

void solution(){
    faster();
    long long n;
    cin >> n;
    vector<long long> a(n);
    nhap(a);
    selection_sort(a);
}

int main(){
    solution();
    return 0;
}