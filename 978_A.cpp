#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    set<int> seen;
    vector<int> result;
    for(int i = n - 1; i >= 0; i--) {
        if(seen.find(arr[i]) == seen.end()) {
            seen.insert(arr[i]);
            result.push_back(arr[i]);
        }
    }
    reverse(result.begin(), result.end());
    cout << result.size() << endl;
    for(int x : result) {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}