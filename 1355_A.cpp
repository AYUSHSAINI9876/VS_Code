#include <bits/stdc++.h>
using namespace std;

long long maxdig(long long n)
{
    long long maxi = 0;
    while (n > 0)
    {
        maxi = max(maxi, n % 10);
        n /= 10;
    }
    return maxi;
}
long long mindig(long long n)
{
    long long mini = 9;
    while (n > 0)
    {
        mini = min(mini, n % 10);
        n /= 10;
    }
    return mini;
}
long long func(long long a1, long long k)
{
    long long curr = a1;
    for (long long i = 1; i < k; i++)
    {
        long long x = maxdig(curr);
        long long y = mindig(curr);
        if (y == 0)
        {
            break; // because further multiplication will give 0
        }
        curr += x * y;
    }
    return curr;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a1, k;
        cin >> a1 >> k;
        cout << func(a1, k) << endl;
    }
    return 0;
}