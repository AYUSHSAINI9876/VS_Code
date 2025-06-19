#include <bits/stdc++.h>
using namespace std;

int main() {
   int n,m;
   cin >> n >> m;
   int days = n, extra = n;
    while (extra >= m) {
        int new_socks = extra / m;
        days += new_socks;
        extra = new_socks + (extra % m);
    }
    cout << days;
    return 0;
}