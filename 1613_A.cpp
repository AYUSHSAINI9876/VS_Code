#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x1, p1, x2, p2;
        cin >> x1 >> p1 >> x2 >> p2;
        string s1 = to_string(x1);
        s1.append(p1, '0'); // appends p1 zeroes to s1
        string s2 = to_string(x2);
        s2.append(p2, '0'); // appends p2 zeroes to s2
        if (s1.length() > s2.length())
        {
            cout << ">" << endl;
        }
        else if (s1.length() < s2.length())
        {
            cout << "<" << endl;
        }
        else
        {
            if (s1 > s2)
            {
                cout << ">" << endl;
            }
            else if (s1 < s2)
            {
                cout << "<" << endl;
            }
            else
            {
                cout << "=" << endl;
            }
        }
    }
    return 0;
}