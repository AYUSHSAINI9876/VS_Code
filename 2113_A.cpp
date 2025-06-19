#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long k, a, b, x, y;
        cin >> k >> a >> b >> x >> y;
        long long ans = 0;
        long long curr1 = k;
        long long count1 = 0;
        if (curr1 >= a)
        {
            long long type1 = (curr1 - a) / x + 1;
            count1 += type1;
            curr1 -= type1 * x;
        }
        if (curr1 >= b)
        {
            long long type2 = (curr1 - b) / y + 1;
            count1 += type2;
        }
        ans = max(ans, count1);
        long long curr2 = k;
        long long count2 = 0;
        if (curr2 >= b)
        {
            long long type2 = (curr2 - b) / y + 1;
            count2 += type2;
            curr2 -= type2 * y;
        }
        if (curr2 >= a)
        {
            long long type1 = (curr2 - a) / x + 1;
            count2 += type1;
        }
        ans = max(ans, count2);
        cout << ans << endl;
    }
    return 0;
}