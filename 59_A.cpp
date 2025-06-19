#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s; 
    int count1 = 0;
    for(int i = 0; i < s.size(); i++) {
        if(s[i] >= 'A' && s[i] <= 'Z') {
            count1++;
        }
    }
    if(count1 > s.size() / 2) {
        transform(s.begin(), s.end(), s.begin(), ::toupper);
    }
    else {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    }
    cout << s << endl;
    return 0;
}