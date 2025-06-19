// #include <iostream>
// using namespace std;

// int main()
// {
// 	int res = 2 + 3 % 4 * 6 % 2 - 9 % 10 + 10 % 5;
// 	cout<<res<<endl;
// }
#include <iostream>
using namespace std;

long long modular_power(long long base, long long exponent, long long mod) {
    long long result = 1;
    base = base % mod; // Handle the case where base is larger than mod
    while (exponent > 0) {
        if (exponent % 2 == 1) { // If exponent is odd
            result = (result * base) % mod;
        }
        exponent = exponent >> 1; // Divide exponent by 2
        base = (base * base) % mod; // Square the base
    }
    return result;
}

int main()
{
    int t;
    cin >> t;
    while (t--) {
        long long base, exponent;
        cin >> base >> exponent;
        cout << modular_power(base, exponent, 1e9+7) << endl;
    }
    return 0;
}