#include <bits/stdc++.h>
using namespace std;

int countUppercase(const string &s)
{
    return count_if(s.begin(), s.end(), [](char c)
                    { return isupper(c); });
}
int countLowercase(const string &s)
{
    return count_if(s.begin(), s.end(), [](char c)
                    { return islower(c); });
}
int countDigits(const string &s)
{
    return count_if(s.begin(), s.end(), [](char c)
                    { return isdigit(c); });
}
int main()
{
    string s;
    cin >> s;
    if (s.size() >= 5 && countUppercase(s) >= 1 && countLowercase(s) >= 1 && countDigits(s) >= 1)
    {
        cout << "Correct" << endl;
    }
    else
    {
        cout << "Too weak" << endl;
    }
    return 0;
}