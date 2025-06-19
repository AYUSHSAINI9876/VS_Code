#include <bits/stdc++.h>
using namespace std;

string determineWinner(int a, int b, int c, int d) {
    while (true) {
        // Gellyfish's turn (odd rounds)
        if (c > 0) {
            if (b <= 1) {
                return "Gellyfish";
            }
            if (d <= 1) {
                d = 0;
            } else {
                d--;
            }
        } else {
            if (b <= 1) {
                return "Gellyfish";
            }
            b--;
        }
        if (b <= 0) {
            return "Gellyfish";
        }

        // Flower's turn (even rounds)
        if (d > 0) {
            if (a <= 1) {
                return "Flower";
            }
            if (c <= 1) {
                c = 0;
            } else {
                c--;
            }
        } else {
            if (a <= 1) {
                return "Flower";
            }
            a--;
        }
        if (a <= 0) {
            return "Flower";
        }
    }
}

int main() {
    int t;
    cin >> t;
    while(t--){
        long long a, b, c, d;
    cin >> a >> b >> c >> d;
        cout << determineWinner(a, b, c, d) << '\n';
    }
    return 0;
}