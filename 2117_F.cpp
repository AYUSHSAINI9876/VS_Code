#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MOD = 1e9 + 7;

vector<vector<int>> adj;
vector<int> parent, children_count;

void dfs(int u, int p) {
    parent[u] = p;
    for (int v : adj[u]) {
        if (v != p) {
            children_count[u]++;
            dfs(v, u);
        }
    }
}

void solve() {
    int n;
    cin >> n;
    adj.assign(n + 1, vector<int>());
    parent.assign(n + 1, -1);
    children_count.assign(n + 1, 0);
    for (int i = 0; i < n - 1; ++i) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    dfs(1, -1);

    bool has_invalid = false;
    for (int u = 1; u <= n; ++u) {
        int leaf_children = 0;
        for (int v : adj[u]) {
            if (v != parent[u] && children_count[v] == 0) {
                leaf_children++;
            }
        }
        if (leaf_children >= 2) {
            has_invalid = true;
            break;
        }
    }
    if (has_invalid) {
        cout << 0 << '\n';
    } else {
        ll ans = 1;
        for (int i = 0; i < n; ++i) {
            ans = ans * 2 % MOD;
        }
        cout << ans << '\n';
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