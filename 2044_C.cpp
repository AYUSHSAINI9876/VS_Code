#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long m,a,b,c;
        cin >> m >> a >> b >> c;
        long long row1_taken = min(a, m);
        long long row2_taken = min(b, m);
        long long row1_empty = max(0LL, m - a);
        long long row2_empty = max(0LL, m - b);
        long long no_pref_taken = min(c, row1_empty + row2_empty);

        cout << row1_taken + row2_taken + no_pref_taken << "\n";
    } 
    return 0;
}