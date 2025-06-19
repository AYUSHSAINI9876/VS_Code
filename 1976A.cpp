#include <bits/stdc++.h>
using namespace std;

bool containsLowerCaseAndDigits(string s){
    bool hasLower = false;
    bool hasDigit = false;
    for (char c : s) {
        if (islower(c)) {
            hasLower = true;
        }
        if (isdigit(c)) {
            hasDigit = true;
        }
    }
    return hasLower || hasDigit;
}

bool DigitAfterLetter(string s){
    for (int i = 0; i < s.size() - 1; i++) {
        if (isalpha(s[i]) && isdigit(s[i + 1])) {
            return false;
        }
    }
    return true;
}
bool isSorted(string s){
    string letters = "", digits = "";
    for (char c : s) {
        if (isdigit(c)) digits += c;
        else if (islower(c)) letters += c;
    }
    return is_sorted(letters.begin(), letters.end()) && is_sorted(digits.begin(), digits.end());
}

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        if(containsLowerCaseAndDigits(s) && DigitAfterLetter(s) && isSorted(s)){
            cout << "YES" << endl;
    }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}