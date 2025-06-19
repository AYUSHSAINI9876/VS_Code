#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<pair<int, int>> segments(n);
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        segments[i].first = min(a, b);
        segments[i].second = max(a, b);
    }
    sort(segments.begin(), segments.end(), [](pair<int, int> a, pair<int, int> b)
         { return a.second < b.second; });
    vector<int> nails;
    int lastNail = INT_MIN;
    for (const pair<int, int> &segment : segments)
    {
        int l = segment.first;
        int r = segment.second;
        if (lastNail < l)
        {
            nails.push_back(r);
            lastNail = r;
        }
    }
    cout << nails.size() << endl;
    for (int nail : nails)
    {
        cout << nail << " ";
    }
    cout << endl;
}

int main()
{
    solve();
    return 0;
}