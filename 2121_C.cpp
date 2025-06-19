#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int r, c;
        cin >> r >> c;
        vector<vector<int>> mat(r, vector<int>(c));
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                cin >> mat[i][j];
            }
        }
        int st = 0;    // st to l
        int end = 100; // end to h
        int ans = 100;
        while (st <= end)
        {
            int mid = st + (end - st) / 2; // to handle large inputs
            bool found = true;             // possible_to_achieve_mid to p
            vector<pair<int, int>> coords; // problematic_coords to pc
            for (int i = 0; i < r; i++)
            {
                for (int j = 0; j < c; j++)
                {
                    if (mat[i][j] > mid + 1)
                    {
                        found = false;
                        break;
                    }
                    if (mat[i][j] == mid + 1)
                    {
                        coords.push_back({i, j});
                    }
                }
                if (!found)
                    break;
            }
            if (found)
            {
                if (coords.empty())
                {
                    found = true;
                }
                else
                {
                    int r1 = coords[0].first;
                    int c1 = coords[0].second;
                    bool tr = true; // try_r1_works to tr
                    int rc = -1;    // required_col_for_r1 to rc
                    for (const auto &it : coords)
                    {
                        int cr = it.first;  // r_curr to cr
                        int cc = it.second; // c_curr to cc
                        if (cr != r1)
                        {
                            if (rc == -1)
                            {
                                rc = cc;
                            }
                            else if (rc != cc)
                            {
                                tr = false;
                                break;
                            }
                        }
                    }
                    if (tr)
                    {
                        found = true;
                    }
                    else
                    {
                        bool tc = true; // try_c1_works to tc
                        int rr = -1;    // required_row_for_c1 to rr
                        for (const auto &it : coords)
                        {
                            int cr = it.first;
                            int cc = it.second;
                            if (cc != c1)
                            {
                                if (rr == -1)
                                {
                                    rr = cr;
                                }
                                else if (rr != cr)
                                {
                                    tc = false;
                                    break;
                                }
                            }
                        }
                        found = tc;
                    }
                }
            }
            if (found)
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