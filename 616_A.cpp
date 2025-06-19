#include <bits/stdc++.h>
using namespace std;

string trim_leading_zeros(const string &s) {
    int i=0;
    while (i < s.size() && s[i] == '0') i++;
    return i == s.size() ? "0" : s.substr(i);
}

int main()
{
    string a, b;
    cin >> a >> b;
    a = trim_leading_zeros(a);
    b = trim_leading_zeros(b);
    if (a.length() > b.length()) {
        cout << ">";
    } else if (a.length() < b.length()) {
        cout << "<";
    } else {
        if (a > b) {
            cout << ">";
        } else if (a < b) {
            cout << "<";
        } else {
            cout << "=";
        }
    }
    return 0;
}