#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        vector<pair<int, int>> ops;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (a[i] > b[i])
            {
                swap(a[i], b[i]);
                ops.push_back(make_pair(3, i + 1));
            }
        }

        // Step 2: Sort array a using adjacent swaps, and swap b accordingly
        for (int i = 0; i < n; i++)
        {
            for (int j = n - 2; j >= i; --j)
            {
                if (a[j] > a[j + 1])
                {
                    swap(a[j], a[j + 1]);
                    ops.push_back(make_pair(1, j + 1));
                    swap(b[j], b[j + 1]); // Maintain a[i] < b[i]
                    ops.push_back(make_pair(2, j + 1));
                }
            }
        }
        cout << ops.size() << endl;
        for (size_t i = 0; i < ops.size(); i++)
        {
            cout << ops[i].first << " " << ops[i].second << endl;
        }
    }
    return 0;
}