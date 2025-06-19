#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--){
        long long n,a,b,c;
        cin >> n >> a >> b >> c;
        long long sum = a + b + c;
        long long full_weeks = (n / sum) * 3; // each "week" is 3 days
        long long total = (n / sum) * sum;
        int day = full_weeks;

        long long walk[3] = {a, b, c};
        for (int i = 0; total < n; ++i) {
            total += walk[i % 3];
            day++;
        }
        cout << day << endl;
    }
    return 0;
}