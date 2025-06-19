#include <bits/stdc++.h>
using namespace std;

int main() {
    int y, w;
    cin >> y >> w;

    int maxi = max(y, w);       
    int favorableOutcomes = 6 - maxi + 1;  
    int denominator = 6;
    int gcd = __gcd(favorableOutcomes, denominator);
    favorableOutcomes /= gcd;
    denominator /= gcd;

    cout << favorableOutcomes << "/" << denominator << endl;

    return 0;
}