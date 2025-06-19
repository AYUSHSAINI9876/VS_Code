#include <bits/stdc++.h>
using namespace std;
 
int main() { 
    long long n,a,b,c;
    cin >> n >> a >> b >> c;
    int ans = 0;
    for (int x = 0; x <= n / a; ++x) {
        for (int y = 0; y <= n / b; ++y) {
            int rest = n - a * x - b * y;
            if (rest >= 0 && rest % c == 0) {
                int z = rest / c;
                ans = max(ans, x + y + z);
            }
        }
    }
    cout << ans;
    return 0;
}