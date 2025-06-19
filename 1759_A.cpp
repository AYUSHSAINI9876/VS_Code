#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    string base = "Yes";
    string repeated = "";
    for(int i = 0; i < 50; i++) {
        repeated += base;
    }
    
    while(t--) {
        string s;
        cin >> s;
        if (repeated.find(s) != string::npos) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}