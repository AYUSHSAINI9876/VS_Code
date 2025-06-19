#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;
        map<char, int> fir;
        map<char, int> last;
        map<char, int> count;
        for (int i = 0; i < n; i++)
        {
            char ch1 = s[i];
            count[ch1]++;
            if (fir.find(ch1) == fir.end())
            {
                fir[ch1] = i;
            }
            last[ch1] = i;
        }
        bool found = false;
        for (int i = 1; i <= n - 2; i++)
        {
            char ch2 = s[i];
            if (count[ch2] > 1)
            {
                if (fir[ch2] < i)
                {
                    found = true;
                    break;
                }
                if (last[ch2] > i)
                {
                    found = true;
                    break;
                }
            }
        }
        if (found)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}