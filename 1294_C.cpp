#include <bits/stdc++.h>
using namespace std;

bool isProductOfThreeIntegers(int num) {
    for (int i = -1000; i <= 1000; ++i) {
        if (i == 0) continue;
        for (int j = -1000; j <= 1000; ++j) {
            if (j == 0) continue;
            if (num % (i * j) != 0) continue;
            int k = num / (i * j);
            if (k != 0 && k >= -1000 && k <= 1000) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if (isProductOfThreeIntegers(n)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}