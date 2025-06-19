#include <bits/stdc++.h>
using namespace std;

bool isLuckyNumber(const string &s)
{
    for (char ch : s)
    {
        if (ch != '4' && ch != '7')
            return false;
    }
    return true;
}

int main()
{
    int n;
    string s;
    cin >> n >> s;
    if (!isLuckyNumber(s))
    {
        cout << "NO" << endl;
        return 0;
    }
    int half=n/2;
    int sum1=0,sum2=0;

    for (int i = 0; i < half; i++)
    {
        sum1 += s[i] - '0';
        sum2 += s[i + half] - '0';
    }

    if (sum1 == sum2)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}