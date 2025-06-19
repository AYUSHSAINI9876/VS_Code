#include <bits/stdc++.h>
using namespace std;

int countOrdinary(long long n) {
    int count = 0;
    for (int d = 1; d <= 9; ++d) {
        long long num = d;
        while (num <= n) {
            count++;
            num = num * 10 + d;
        }
    }
    return count;
}

int main()
{
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        cout << countOrdinary(n) << endl;
    }
    return 0;
}