#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r, g, b;
    cin >> r >> g >> b;
    int ans = 0;
    // int x = r % 3, y = g % 3, z = b % 3;
    // if (x == 0 && y == 0 && z == 0)
    // {
    //     ans = r / 3 + g / 3 + b / 3;
    // }
    // else if (x == 1 && y == 1 && z == 1)
    // {
    //     ans = (r - 1) / 3 + (g - 1) / 3 + (b - 1) / 3 + 1;
    // }
    // else if ((x == 2 && y == 2 && z == 2) || (x == 0 && y == 0 && z == 2) || (x == 0 && y == 2 && z == 0) || (x == 2 && y == 0 && z == 0))
    // {
    //     ans = (r - x) / 3 + (g - y) / 3 + (b - z) / 3 + x;
    // }
    // else
    // {
    //     ans = r / 3 + g / 3 + b / 3;
    // }
    for (int mix = 0; mix <= 2; mix++)
    {
        if (r >= mix && g >= mix && b >= mix)
        {
            int x = r - mix;
            int y = g - mix;
            int z = b - mix;
            int temp = mix + x / 3 + y / 3 + z / 3;
            ans = max(ans, temp);
        }
    }
    cout << ans << endl;
    return 0;
}