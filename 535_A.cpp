#include <bits/stdc++.h>
using namespace std;

int main() {
    int s;
    cin >> s;
    string ones[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    string teens[] = {"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen",
                      "sixteen", "seventeen", "eighteen", "nineteen"};
    string tens[] = {"", "", "twenty", "thirty", "forty", "fifty",
                     "sixty", "seventy", "eighty", "ninety"};

    if (s < 10) {
        cout << ones[s];
    } else if (s < 20) {
        cout << teens[s - 10];
    } else {
        cout << tens[s / 10];
        if (s % 10 != 0) {
            cout << "-" << ones[s % 10];
        }
    }
    return 0;
}