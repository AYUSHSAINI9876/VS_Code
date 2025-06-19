#include <bits/stdc++.h>
using namespace std;

void mex(){
    int n;
    cin >> n;
    vector<vector<int>>grid(n,vector<int>(n));
    int current = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            grid[i][j] = current++;
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << grid[i][j] << " ";
        }
        cout << "\n";
    }
}

int main() {
    int t;
    cin >> t;
    while(t--){
        mex();
    }
    return 0;
}