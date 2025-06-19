#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;
    int x = d;
    int type1 = min(a, x);
    x -= type1;
    int type2 = min({b, c, x});
    int profit1 = type1 * e + type2 * f;
    int y = d;
    int type2_alt = min({b, c, y});
    y -= type2_alt;
    int type1_alt = min(a, y);
    int profit2 = type2_alt * f + type1_alt * e;
    cout << max(profit1, profit2) << endl;
    return 0;
}