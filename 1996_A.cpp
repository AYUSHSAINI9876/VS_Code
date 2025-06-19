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
        int mini = n / 4;
        int remainder = n % 4;

        if (remainder != 0 && remainder == 2)
        {
            mini++;
        }
        cout << mini << '\n';
    }
    return 0;
}