#include <bits/stdc++.h>
using namespace std;

long long getMOD(long long val, long long mod)
{
    return (val % mod + mod) % mod;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long w, h, a, b;
        cin >> w >> h >> a >> b;
        long long x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        bool x_aligned = (getMOD(x1, a) == getMOD(x2, a));
        bool y_aligned = (getMOD(y1, b) == getMOD(y2, b));
        bool horiz = (x1 + a <= x2 || x2 + a <= x1);
        bool vert = (y1 + b <= y2 || y2 + b <= y1);
        bool found = false;
        if (x_aligned && y_aligned)
        {
            found = true;
        }
        else if (x_aligned && !y_aligned)
        {
            if (horiz)
            {
                found = true;
            }
        }
        else if (!x_aligned && y_aligned)
        {
            if (vert)
            {
                found = true;
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