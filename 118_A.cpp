#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s;
    string ans = "";
    string vowels = "aoyeuiAOYEUI";
    for (char ch : s) {
        if (vowels.find(ch) == string::npos) { 
            ans += '.';
            ans += tolower(ch);
        }
    }
    cout << ans << endl;
    return 0;
}