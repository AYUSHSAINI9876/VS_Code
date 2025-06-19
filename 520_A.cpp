#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s; 
    transform(s.begin(), s.end(), s.begin(), ::tolower);

    set<char> letters;
    for (char c : s) {
        if (c >= 'a' && c <= 'z') {
            letters.insert(c);
        }
    }

    if (letters.size() == 26) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}