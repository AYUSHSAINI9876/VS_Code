#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    vector<int> first_pos(n + 2, -1);
    vector<int> last_pos(n + 2, -1);

    // Process to find first_pos[x]: earliest i where a[i] >=x
    for (int x = 1; x <= n; ++x) {
        for (int i = 0; i < n; ++i) {
            if (a[i] >= x) {
                first_pos[x] = i;
                break;
            }
        }
    }

    // Process to find last_pos[x]: latest i where a[i] >=x
    for (int x = 1; x <= n; ++x) {
        for (int i = n - 1; i >= 0; --i) {
            if (a[i] >= x) {
                last_pos[x] = i;
                break;
            }
        }
    }

    long long beauty = 0;
    for (int x = 1; x <= n; ++x) {
        if (first_pos[x] != -1 && last_pos[x] != -1 && first_pos[x] < last_pos[x]) {
            beauty += (last_pos[x] - first_pos[x]);
        }
    }

    cout << beauty << '\n';
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}