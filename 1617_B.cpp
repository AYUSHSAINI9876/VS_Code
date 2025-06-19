#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int c = 1;
        int a = n / 2;
        int b = n - a - c;
        if (gcd(a, b) != 1) {
            a--;
            b = n - a - c;
        }
        cout << a << " " << b << " " << c << "\n";
    }
    return 0;
}