#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;
    // long long x=pow(1378,n);
    // int z=x%10;
    // cout << z << endl;

    if (n == 0) {
        cout << 1 << endl;
        return 0;
    }

    int cycle[] = {8, 4, 2, 6};
    int index = (n % 4 == 0) ? 3 : (n % 4 - 1);
    cout << cycle[index] << endl;

    return 0;
}