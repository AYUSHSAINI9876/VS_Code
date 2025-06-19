#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long>arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        long long diff=arr[1]-arr[0];
        bool found = true;
        for (int i = 2; i < n; i++) {
            if (arr[i] - arr[i-1] != diff) {
                found = false;
                break;
            }
        }
        if(!found){
            cout << "NO" << endl;
            continue;
        }
        long long y1 = arr[0] - diff;
        long long y2 = n + 1;
        if (y1 < 0 || y1 % y2 != 0) {
            cout << "NO" << endl;
            continue;
        }
        long long y = y1 / y2;
        long long x = diff + y;
        if (x < 0) {
            cout << "NO" << endl;
            continue;
        }
        cout << "YES" << endl;
    }
    return 0;
}