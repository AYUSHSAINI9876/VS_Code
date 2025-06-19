#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> fib = {0, 1};
    while (fib.back() < n) {
        int next = fib[fib.size() - 1] + fib[fib.size() - 2];
        if (next > n) break;
        fib.push_back(next);
    }
    for (int i = 0; i < fib.size(); ++i) {
        for (int j = 0; j < fib.size(); ++j) {
            for (int k = 0; k < fib.size(); ++k) {
                if (fib[i] + fib[j] + fib[k] == n) {
                    cout << fib[i] << " " << fib[j] << " " << fib[k] << endl;
                    return 0;
                }
            }
        }
    }
    cout << "I'm too stupid to solve this problem" << endl;
    return 0;
}