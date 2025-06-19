#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int sum = 0, count = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] >= k)
            {
                sum += arr[i];
            }
            else if (arr[i] == 0 && sum > 0)
            {
                sum--;
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}