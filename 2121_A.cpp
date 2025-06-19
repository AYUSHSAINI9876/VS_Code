#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, s;
        cin >> n >> s;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int mini = arr[0];
        int maxi = arr[n - 1];
        int count = abs(s - mini) + (maxi - mini);
        count = min(count, abs(s - maxi) + (maxi - mini)); // Try from both directions
        cout << count << endl;
    }
    return 0;
}