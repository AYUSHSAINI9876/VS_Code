#include <bits/stdc++.h>
using namespace std;

struct Modification {
    int x, y, z;
};

void solve() {
    int n, q;
    cin >> n >> q; 
    vector<int> b(n);
    for (int i = 0; i < n; ++i) {
        cin >> b[i];
    }
    vector<Modification> modifications(q);
    for (int i = 0; i < q; ++i) {
        cin >> modifications[i].x >> modifications[i].y >> modifications[i].z;
        modifications[i].x--; // Adjust to 0-based index
        modifications[i].y--; // Adjust to 0-based index
        modifications[i].z--; // Adjust to 0-based index
    }
    vector<int> a = b;
    vector<int> last_op_for_z(n, -1);
    for (int i = 0; i < q; i++) {
        last_op_for_z[modifications[i].z] = i;
    }
    for (int k = q - 1; k >= 0; --k) {
        int x_k = modifications[k].x;
        int y_k = modifications[k].y;
        int z_k = modifications[k].z;
        if (last_op_for_z[z_k] == k) {
            a[x_k] = max(a[x_k], b[z_k]);
            a[y_k] = max(a[y_k], b[z_k]);
        }
    }
    vector<int> simulated_c = a;
    for (int k = 0; k < q; ++k) {
        int x_k = modifications[k].x;
        int y_k = modifications[k].y;
        int z_k = modifications[k].z;
        simulated_c[z_k] = std::min(simulated_c[x_k], simulated_c[y_k]);
    }
    bool possible = true;
    for (int i = 0; i < n; i++) {
        if (simulated_c[i] != b[i]) {
            possible = false;
            break; 
        }
    }
    if (possible) {
        for (int i = 0; i < n; i++) {
            std::cout << a[i] << (i == n - 1 ? "" : " ");
        }
        std::cout << endl;
    } else {
        std::cout << "-1" << endl; 
    }
}

int main() {
    int t;
    cin >> t; 
    while (t--) {
        solve(); 
    }
    return 0;
}