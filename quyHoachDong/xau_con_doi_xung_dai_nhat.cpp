#include <bits/stdc++.h>
using namespace std;

void faster()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int xu_ly(string s)
{
    int res1 = 1; // độ dài xâu con đối xứng luôn bằng 1
    // nếu độ dài xâu là lẻ
    for (int i = 0; i < s.size(); i++)
    {
        int left = i, right = i;
        while (left >= 0 && right < s.size())
        {
            //kiểm tra điều kiện là xâu con đối xứng phải liên tiếp
            if (s[left] == s[right])
            {
                res1 = max(res1, right - left + 1);
                left--, right++;
            }
            // nếu không thì thoát vòng lặp
            else
            {
                break;
            }
        }
    }
    // nếu độ dài xâu là chẵn
    for (int i = 0; i < s.size() - 1; i++)
    {
        int left = i, right = i + 1;
        while (left >= 0 && right < s.size())
        {
            // tương tự như ở phía trên
            if (s[left] == s[right])
            {
                res1 = max(res1, right - left + 1);
                left--, right++;
            }
            else
            {
                break;
            }
        }
    }
    return res1;
}

void solution()
{
    faster();
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s;
        cin >> s;
        cout << xu_ly(s) << endl;
    }
}

int main()
{
    solution();
    return 0;
}