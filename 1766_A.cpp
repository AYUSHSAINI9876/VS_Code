#include <bits/stdc++.h>
using namespace std;

vector<int> precomputeExtremelyRound()
{
    vector<int> res;
    for (int d = 1; d <= 9; ++d)
    {
        int num = d;
        while (num <= 1000000000)
        {
            res.push_back(num);
            num *= 10;
        }
    }
    sort(res.begin(), res.end()); // Optional: for binary search if needed
    return res;
}

bool isExtremelyRound(int n)
{
    int count = 0;
    while (n > 0)
    {
        if (n % 10 != 0)
        {
            count++;
        }
        n /= 10;
    }
    return count == 1;
}

int main()
{
    int t;
    cin >> t;
    // vector<int> extremelyRound = precomputeExtremelyRound();
    while (t--)
    {
        int n;
        cin >> n;
        int count = 0;
        for (int d = 1; d <= 9; d++)
        {
            for (int p = 0;; p++)
            {
                int num = d * pow(10, p);
                if (num <= n)
                {
                    count++;
                }
                else
                {
                    break;
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}