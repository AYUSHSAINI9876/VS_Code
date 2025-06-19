#include <bits/stdc++.h>
using namespace std;

bool isComposite(int n) {
    if (n <= 3) return false;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0)
            return true;
    }
    return false;
}

int main() {
    int n;
    cin >> n;
    for (int b = 4; ; ++b) {
        int a=b+n;
        if (isComposite(a) && isComposite(b)) {
            cout << a << " " << b << endl;
            break;
        }
    }
    return 0;
}
