#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    sort(arr.begin(),arr.end());
    int a_i = arr[n-1]; // largest element
    int best_j = arr[0];
    double min_diff = abs(arr[0] - a_i / 2.0); // ← NOTE: use double division

    for(int i = 1; i < n - 1; i++) { // exclude the largest one
        double diff = abs(arr[i] - a_i / 2.0);
        if(diff < min_diff) {
            min_diff = diff;
            best_j = arr[i];
        }
    }
    cout << a_i << " " << best_j << endl;
    return 0;
}