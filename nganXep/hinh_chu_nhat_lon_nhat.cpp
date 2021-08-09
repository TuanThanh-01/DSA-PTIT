#include <bits/stdc++.h>
using namespace std;
long long n;
// tutorial: https://www.youtube.com/watch?v=ZmnqCZp9bBs&t=93s 
void faster()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void nhap(vector<long long> &arr)
{
    vector<long long>::iterator it;
    for (it = arr.begin(); it != arr.end(); it++)
    {
        cin >> *it;
    }
}

void xu_ly(vector<long long> arr)
{
    long long res = 0;
    long long max_size = 0;
    long long i = 0;
    stack<long long> st;
    while (i < n)
    {
// ktra nếu stack rỗng hoặc mảng arr tại ví trí đầu của stack < phần tử arr[i]
        if (st.empty() || arr[st.top()] < arr[i])
        {
            st.push(i++);
        }
        else
        {
            long long tmp = st.top();
            st.pop();
            if (st.empty())
            {
                max_size = arr[tmp] * i;
            }
            else
            {
                max_size = arr[tmp] * (i - st.top() - 1);
            }
            res = max(res, max_size);
        }
    }

    while (!st.empty())
    {
        long long tmp = st.top();
        st.pop();
        if (st.empty())
        {
            max_size = arr[tmp] * i;
        }
        else
        {
            max_size = arr[tmp] * (i - st.top() - 1);
        }
        res = max(res, max_size);
    }
    cout << res << endl;
}

void solution(){
    faster();
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        vector<long long> arr(n);
        nhap(arr);
        xu_ly(arr);
    }
}

int main()
{
    solution();
    return 0;
}