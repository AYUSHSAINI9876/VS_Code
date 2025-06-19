#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
    int n, k;
        cin >> n >> k;
    string s;
    cin >> s;

    int freq1 = 0;
    int freq2 = 0;
    for (char ch : s) {
        if (ch == '0') {
            freq1++;
        } else {
            freq2++;
        }
    }
    int count = n / 2 - k;
    bool found=true;
    if (freq1 < count || freq2 < count) {
        found=false;
    }
    if(found){
    int countzeros = freq1 - count;
    int countones = freq2 - count;
    if (countzeros % 2 != 0 || countones % 2 != 0) {
        found=false;
    }
    }
    if (found) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl; 
    }
    }
    return 0;
}