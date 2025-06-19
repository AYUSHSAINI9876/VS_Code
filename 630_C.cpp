#include <bits/stdc++.h>
using namespace std;

bool isLucky(int n) {
    while(n > 0) {
        int digit = n % 10;
        if (digit != 8 && digit != 7) {
            return false; 
        }
        n /= 10;
    }
    return true; 
}

int numberOfdigsits(int n) {
    int count = 0;
    while(n > 0) {
        n /= 10; 
        count++; 
    }
    return count; 
}

int main() {
    int n;
    cin >> n;
    long long result = (1LL << (n + 1)) - 2; // 2^(n+1) - 2
    cout << result << endl;
    return 0;
}