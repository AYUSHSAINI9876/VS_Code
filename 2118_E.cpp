#include <bits/stdc++.h>
using namespace std;

struct Cell {
    int r, c;
    int dc_dist;
    int dm_dist;
};

bool compareCells(const Cell& a,const Cell& b){
    if (a.dc_dist != b.dc_dist) {
        return a.dc_dist < b.dc_dist;
    }
    if (a.dm_dist != b.dm_dist) {
        return a.dm_dist < b.dm_dist;
    }
    if (a.r != b.r) {
        return a.r < b.r;
    }
    return a.c < b.c;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int x = (n + 1) / 2;
        int y = (m + 1) / 2;
        vector<Cell> cells;
        cells.reserve(n * m);
        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= m; ++j) {
                Cell curr;
                curr.r = i;
                curr.c = j;
                curr.dc_dist = max(abs(i - x), abs(j - y));
                curr.dm_dist = abs(i - x) + abs(j - y);
                cells.push_back(curr);
            }
        }
        sort(cells.begin(), cells.end(), compareCells);
        for (const auto& it : cells) {
            cout << it.r << " " << it.c << endl;
        }
    }
    return 0;
}