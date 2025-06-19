#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long x, y, n;
        cin >> x >> y >> n;
        // long long maxi = 0LL;
        // for (long long k = 0; k <= n; k++)
        // {
        //     if (k % x == y)
        //     {
        //         maxi = max(maxi, k);
        //     }
        // }
        // cout << maxi << endl;
        long long m = (n / x) * x;
        long long k = m + y;
        if (k > n)
        {
            k = m - x + y;
        }
        cout << (k >= 0 ? k : 0) << endl;
    }
    return 0;
}