#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        bool found = false;
        for (int i = 0; i < 3; i++)
        {
            for (int j = i + 1; j < 3; j++)
            {
                swap(s[i], s[j]);
                if (s == "abc")
                {
                    found = true;
                }
                swap(s[i], s[j]); // swap back
            }
        }
        if (found || s=="abc")
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}