#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    bool condition1 = true, condition2 = true;
    for (char ch : s) {
        if (!isupper(ch)) {
            condition1 = false;
            break;
        }
    }
    if (!islower(s[0])){
        condition2 = false;
    }
    for (int i = 1; i < s.size(); i++) {
        if (!isupper(s[i])) {
            condition2 = false;
            break;
        }
    }
    if (condition1 || condition2) {
        for (char &ch : s) {
            if (islower(ch)){
                ch = toupper(ch);
            }
            else{
                ch = tolower(ch);
            }
        }
    }
    cout << s;
    return 0;
}