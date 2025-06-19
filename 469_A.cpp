#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int p;
    cin >> p;
    vector<int>arr1(p);
    for (int i = 0; i <p; i++) {
        cin >> arr1[i];
    }
    int q;
    cin >> q;
    vector<int>arr2(q);
    for (int i = 0; i <q; i++) {
        cin >> arr2[i];
    }
    vector<bool> visited(n + 1, false);
    for (int i = 0; i < p; i++) {
        if (arr1[i] >= 1 && arr1[i] <= n) {
            visited[arr1[i]] = true;
        }
    }

    for (int i = 0; i < q; i++) {
        if (arr2[i] >= 1 && arr2[i] <= n) {
            visited[arr2[i]] = true;
        }
    }

    bool found = true;
    for (int i = 1; i <= n; i++) {
        if (!visited[i]) {
            found = false;
            break;
        }
    }

    if (found) {
        cout << "I become the guy.";
    } else {
        cout << "Oh, my keyboard!";
    }
}