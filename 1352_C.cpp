#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, k;
        cin >> n >> k;
        long long st = 1, end = 1e18, ans = 0;
        while (st <= end)
        {
            long long mid = (st + end) / 2;
            long long count = mid - mid / n;

            if (count >= k)
            {
                ans = mid;
                end = mid - 1;
            }
            else
            {
                st = mid + 1;
            }
        }
        cout << ans << endl;
    }
    return 0;
}