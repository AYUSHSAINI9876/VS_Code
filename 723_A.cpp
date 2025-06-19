#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x1,x2,x3;
    cin >> x1 >> x2 >> x3;
    vector<int>arr;
    arr.push_back(x1);
    arr.push_back(x2);
    arr.push_back(x3);
    sort(arr.begin(), arr.end());
    cout << arr[arr.size() - 1] - arr[0];
    return 0;
}