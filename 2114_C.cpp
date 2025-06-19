#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t; 
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i){
            cin >> a[i];
        }
        int count = 0;
        int prev = INT_MIN;  
        for (int i = 0; i < n; ++i) {
            if (prev + 1 < a[i]) {
                count++;
                prev = a[i];
            }
        }
        cout << count << endl;
    }
    return 0;
}
