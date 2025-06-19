#include <bits/stdc++.h>
using namespace std;
// dp approach using memoization
string sl, sr;
int n;
int memo[10][2][2];
int solve(int ind, bool st, bool end)
{
    if (ind == n)
    {
        return 0;
    }
    if (memo[ind][st][end] != -1)
    {
        return memo[ind][st][end];
    }
    int mini = 1e9;
    int lower_bound = st ? (sl[ind] - '0') : 0;
    int upper_bound = end ? (sr[ind] - '0') : 9;
    for (int i = lower_bound; i <= upper_bound; i++)
    {
        int curr = 0;
        if (i == (sl[ind] - '0'))
        {
            curr++;
        }
        if (i == (sr[ind] - '0'))
        {
            curr++;
        }
        bool nextL = st && (i == (sl[ind] - '0'));
        bool nextR = end && (i == (sr[ind] - '0'));
        mini = min(mini, curr + solve(ind + 1, nextL, nextR));
    }
    return memo[ind][st][end] = mini;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long l, r;
        cin >> l >> r;
        sl = to_string(l);
        sr = to_string(r);
        n = sl.length();
        memset(memo, -1, sizeof(memo));
        cout << solve(0, true, true) << endl;
    }
    return 0;
}