#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (int &x : a)
        cin >> x;
    for (int &x : b)
        cin >> x;

    map<int, int> countA, countB;

    for (int i = 0; i < n; ++i)
    {
        // Try putting the rarer value in the rarer set
        int ai = a[i], bi = b[i];
        if (ai == bi)
        {
            countA[ai]++;
            // b[i] stays same
        }
        else
        {
            // Put the one which has fewer so far into the array with fewer copies
            if (countA[ai] + countB[ai] <= countA[bi] + countB[bi])
            {
                countA[ai]++;
                countB[bi]++;
            }
            else
            {
                // Swap to better balance
                swap(a[i], b[i]);
                countA[b[i]]++;
                countB[a[i]]++;
            }
        }
    }

    set<int> sa(a.begin(), a.end()), sb(b.begin(), b.end());

    cout << sa.size() + sb.size() << "\n";
    for (int x : a)
        cout << x << " ";
    cout << "\n";
    for (int x : b)
        cout << x << " ";
    cout << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}