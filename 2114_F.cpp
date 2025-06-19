#include <bits/stdc++.h>
using namespace std;

const int MAX = 2e6 + 10; 

int solve() {
    int x, y, k;
    cin >> x >> y >> k;
    if (x == y) {
        return 0;
    }
    queue<pair<long long, int>> q;
    vector<int> dist(MAX, -1);
    q.push({x, 0});
    dist[x] = 0;
    while (!q.empty()) {
        long long fir = q.front().first;
        int count = q.front().second;
        q.pop();
        for (int a = 1; a <= k; ++a) {
            long long sec = fir * a;
            if (sec > MAX) {
                break;
            }
            if (dist[sec] == -1) {
                dist[sec] = count + 1;
                if (sec == y) {
                    return count + 1;
                }
                q.push({sec, count + 1});
            }
        }
        for (int a = 1; a <= k; ++a) {
            if (fir % a == 0) {
                long long sec = fir / a;
                if (sec < 1) {
                    continue;
                }
                if (dist[sec] == -1) {
                    dist[sec] = count + 1;
                    if (sec == y) {
                        return count + 1;
                    }
                    q.push({sec, count + 1});
                }
            }
        }
    }
    return -1;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        cout << solve() << '\n';
    }
    return 0;
}