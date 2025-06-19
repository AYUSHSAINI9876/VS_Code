#include <bits/stdc++.h>
using namespace std;

long long getSum(int r1, int c1, int r2, int c2, int n, int m, const vector<vector<long long>> &empty_pref)
{
    r1 = max(0, r1);
    c1 = max(0, c1);
    r2 = min(n - 1, r2);
    c2 = min(m - 1, c2);
    if (r1 > r2 || c1 > c2) // out of bound cases
    {
        return 0;
    }
    long long val = empty_pref[r2][c2];
    if (r1 > 0)
    {
        val -= empty_pref[r1 - 1][c2];
    }
    if (c1 > 0)
    {
        val -= empty_pref[r2][c1 - 1];
    }
    if (r1 > 0 && c1 > 0)
    {
        val += empty_pref[r1 - 1][c1 - 1];
    }
    return val;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        vector<string> grid(n);
        for (int i = 0; i < n; i++)
        {
            cin >> grid[i];
        }
        vector<vector<long long>> empty_cell_map(n, vector<long long>(m));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (grid[i][j] == '.')
                {
                    empty_cell_map[i][j] = 1;
                }
                else
                {
                    empty_cell_map[i][j] = 0;
                }
            }
        }
        vector<vector<long long>> empty_pref(n, vector<long long>(m, 0));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                empty_pref[i][j] = empty_cell_map[i][j];
                if (i > 0)
                {
                    empty_pref[i][j] += empty_pref[i - 1][j];
                }
                if (j > 0)
                {
                    empty_pref[i][j] += empty_pref[i][j - 1];
                }
                if (i > 0 && j > 0)
                {
                    empty_pref[i][j] -= empty_pref[i - 1][j - 1];
                }
            }
        }
        int total = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (grid[i][j] == 'g')
                {
                    bool found = false;
                    // Check top boundary (row x_0 - k)
                    int x_det = i - k;
                    int y_det1 = j - k;
                    int y_det2 = j + k;
                    if (x_det >= 0 && x_det < n)
                    {
                        if (getSum(x_det, y_det1, x_det, y_det2, n, m, empty_pref) > 0)
                        {
                            found = true;
                        }
                    }
                    if (!found)
                    {
                        x_det = i + k;
                        if (x_det >= 0 && x_det < n)
                        {
                            if (getSum(x_det, y_det1, x_det, y_det2, n, m, empty_pref) > 0)
                            {
                                found = true;
                            }
                        }
                    }
                    if (!found)
                    {
                        int y_det = j - k;
                        int x_det1 = i - k + 1;
                        int x_det2 = i + k - 1;
                        if (y_det >= 0 && y_det < m)
                        {
                            if (getSum(x_det1, y_det, x_det2, y_det, n, m, empty_pref) > 0)
                            {
                                found = true;
                            }
                        }
                    }
                    if (!found)
                    {
                        int y_det = j + k;
                        int x_det1 = i - k + 1;
                        int x_det2 = i + k - 1;
                        if (y_det >= 0 && y_det < m)
                        {
                            if (getSum(x_det1, y_det, x_det2, y_det, n, m, empty_pref) > 0)
                            {
                                found = true;
                            }
                        }
                    }
                    if (found)
                    {
                        total++;
                    }
                }
            }
        }
        cout << total << endl;
    }
    return 0;
}