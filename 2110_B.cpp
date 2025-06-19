#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s; 
    cin >> s; 
    int balance = 0;
    bool found=false;
    for (int i = 0; i < s.length() - 1;i++) {
        if (s[i] == '(') {
            balance++;
        } else {
            balance--; 
        }
        if (balance == 0) {
            found=true; 
            break; 
        }
    }
    if (found) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}
int main() {
    int t;
    cin >> t; 

    while (t--) {
        solve();
    }
    return 0; 
}