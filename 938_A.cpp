#include <bits/stdc++.h>
using namespace std;

bool isVowel(char c) {
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y';
}
int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 1; i < n; i++) {
        while(isVowel(s[i]) && isVowel(s[i - 1])) {
            s.erase(i, 1); // Remove the current character
            n--; // Decrease the length of the string
            if (i > 0) i--; // Move back to check the previous character again
        } 
    }
    cout << s << endl;
    return 0;
}