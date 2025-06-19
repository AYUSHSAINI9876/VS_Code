#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    string target = "hello";
    int j = 0;
    for (char ch : s) {
        if (ch == target[j]) {
            j++;
        }
        if (j == target.length()) {
            break;
        }
    }
    if (j == target.length()) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}