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
    while (t--){
        int x;
        cin >> x;
        int y = 1;
        int maxi = gcd(x, 1) + 1;
        for (int i = 2; i < x; i++) {
            int curr = gcd(x, i) + i;
            if (curr > maxi) {
                maxi = curr;
                y = i;
            }
        }
        cout << y << endl;
    }
    return 0;
}