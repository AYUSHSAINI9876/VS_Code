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
        vector<int> res;
        int mid = n / 2;

        // First half: mid, mid-1, ..., 1
        for (int i = mid; i >= 1; --i)
            res.push_back(i);

        // Second half: mid+1, mid+2, ..., n
        for (int i = mid + 1; i <= n; ++i)
            res.push_back(i);

        for (int num : res)
            cout << num << " ";
        cout << endl;
    }
    return 0;
}