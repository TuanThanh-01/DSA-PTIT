#include<bits/stdc++.h>
using namespace std;
/*Thuật toán sắp xếp chèn thực hiện sắp xếp dãy số theo cách duyệt từng phần tử và chèn từng phần
tử đó vào đúng vị trí trong mảng con(dãy số từ đầu đến phần tử phía trước nó) đã sắp xếp sao cho
dãy số trong mảng sắp đã xếp đó vẫn đảm bảo tính chất của một dãy số tăng dần.*/
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

void insertion_sort(vector<long long> a){
    vector<long long> res; 
    long long key,j;
    res.push_back(a[0]);
    for(int i = 1;i <= a.size();i++){
        key = a[i];
        j = i - 1;
        cout << "Buoc " << i - 1 << ": ";
        in(res);
        cout << endl;
        res.push_back(key);
        while(j >= 0 && res[j] > key){
            res[j + 1] = res[j];
            j--;
        }
        res[j + 1] = key;
    }
}

void solution(){
    faster();
    long long n;
    cin >> n;
    vector<long long> a(n);
    nhap(a);
    insertion_sort(a);
}

int main(){
    solution();
    return 0;
}