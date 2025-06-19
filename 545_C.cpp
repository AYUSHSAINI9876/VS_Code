#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first >> v[i].second;
    }
    if (n == 1)
    {
        cout << 1 << endl;
        return;
    }

    int ans = 1;
    for (int i = 1; i < n - 1; i++)
    {
        if (abs(v[i].first - v[i - 1].first) > v[i].second)
        {
            ans++;
        }
        else
        {
            if (v[i].first + v[i].second < v[i + 1].first)
            {
                ans++;
                v[i].first += v[i].second;
            }
        }
    }
    ans++;
    cout << ans << endl;
}

int main()
{
    solve();
    return 0;
}