#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t; 
    while (t--) {
        string s;
        cin >> s;
        string s1 = s.substr(0, s.size() / 2);
        string s2 = s.substr(s.size() / 2);
        if(s1 == s2){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}