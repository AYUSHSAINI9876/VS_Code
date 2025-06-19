#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--){
        int x;
        cin >> x;
        if (x == 1) {
            // No such positive integers i, j where gcd + lcm = 1
            cout << -1 << endl;
        } else {
            cout << 1 << " " << x - 1 << endl;
        }
    }
    return 0;
}