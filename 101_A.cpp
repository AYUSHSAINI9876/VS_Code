#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin >> q;
    while (q--)
    {
        long long li, ri, di;
        cin >> li >> ri >> di;
        vector<long long> ans1, ans2, ans;
        if (di < li)
        {
            cout << di << endl;
        }
        else
        {
            long long next = ((ri / di) + 1) * di;
            cout << next << endl;
        }
    }
    return 0;
}