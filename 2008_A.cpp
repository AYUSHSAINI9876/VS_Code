#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        bool found = false;
        for (int i = 0; i <= a; i++)
        {
            for (int j = 0; j <= b; j++)
            {
                int sum = i * 1 + j * 2 - (a - i) * 1 - (b - j) * 2;
                if (sum == 0)
                {
                    found = true;
                }
            }
        }
        if (found)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}