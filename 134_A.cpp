#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    vector<int> res;
    for (int i = 0; i < n; i++)
    {
        long long remaining_sum = sum - a[i];
        if (remaining_sum % (n - 1) == 0)
        {
            long long mean = remaining_sum / (n - 1);
            if (a[i] == mean)
            {
                res.push_back(i + 1);
            }
        }
    }
    cout << res.size() << endl;
    for (int num : res)
    {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}