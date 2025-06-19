#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int>arr(n);
    int total_sum = 0;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        total_sum += arr[i]; // Compute total sum of all coins
    }

    sort(arr.rbegin(), arr.rend()); // Sort in descending order

    int my_sum = 0, count = 0;
    for (int i = 0; i < n; i++) {
        my_sum += arr[i];
        count++;
        if (my_sum > total_sum - my_sum) {
            break; // Stop once my_sum is strictly greater than the rest
        }
    }

    cout << count << endl;
    return 0;
}