#include <bits/stdc++.h>
using namespace std;

struct Number {
    int value;
    int index;
};


int main() {
    int n;
    cin >> n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    vector<Number> even, odd;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0)
            even.push_back({arr[i], i + 1});
        else
            odd.push_back({arr[i], i + 1});
    }
    cout << (even.size() == 1 ? even[0].index : odd[0].index) << endl;
    return 0;
}