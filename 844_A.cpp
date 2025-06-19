#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int k;
    cin >> k;
    if (s.size() < k)
    {
        cout << "impossible";
        return 0;
    }
    else
    {
        set<int> st(s.begin(), s.end());
        if (st.size() >= k)
        {
            cout << 0;
        }
        else
        {
            cout << k - st.size();
        }
    }
    return 0;
}