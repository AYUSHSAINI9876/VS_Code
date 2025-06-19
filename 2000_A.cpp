#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        if(s.size() >= 3 && s[0] == '1' && s[1] == '0') {
            string rest = s.substr(2); // extract digits after "10"
            int suffix = stoi(rest);   // convert remaining part to integer
            if(suffix >= 2) {
                cout << "YES\n";
                continue;
            }
        }
        cout << "NO\n";
    }
    return 0;
}