#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    int count = 0;
    for (int i = 0; i < n - 1; ++i)
    {
        if (2 * arr[i + 1] == (arr[i] + arr[i + 2]))
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}