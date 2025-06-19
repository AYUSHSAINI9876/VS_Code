#include <bits/stdc++.h>
using namespace std;

const int MAX = 1e6 + 1;
bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; 1LL * i * i <= n; ++i) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}
int main() {
    int n;
    cin >> n;
    if(isPrime(n)){
        cout<<1 << endl<< n << endl;
        return 0;
    }
    if(isPrime(n-2)){
        cout << 2 << "\n2 " << n - 2 << "\n";
        return 0;
    }
    for (int i = 2; i <= n; ++i) {
        if (isPrime(i) && isPrime(n - 3 - i)) {
            cout << 3 << "\n3 " << i << " " << n - 3 - i << "\n";
            return 0;
        }
    }
    return 0;
}