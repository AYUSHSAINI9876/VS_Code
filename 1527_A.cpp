#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t; 

    while (t--) {
        int n;
        cin >> n;
        int val = n;
        int k = n;

        while (k >= 0) {
            if (val == 0) break;
            k--;
            val &= k;
        }

        cout << k << endl;
    }
    return 0; 
}