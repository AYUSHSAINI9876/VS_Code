#include <bits/stdc++.h>
using namespace std;

set<long long> luckyNumbers;

void generateLucky(long long num, int depth = 0)
{
    if (depth > 10)
        return;
    if (num != 0)
        luckyNumbers.insert(num);

    generateLucky(num * 10 + 4, depth + 1);
    generateLucky(num * 10 + 7, depth + 1);
}

bool Digs(long long n)
{
    vector<int> digits;
    while (n > 0)
    {
        int digit = n % 10;
        if (digit != 4 && digit != 7)
        {
            return false;
        }
        n /= 10;
    }
    return true;
}

int sumDig(long long n)
{
    int sum = 0;
    while (n > 0)
    {
        sum += (n % 10);
        n /= 10;
    }
    return sum;
}
int main()
{
    int n;
    cin >> n;
    generateLucky(0); // generate all lucky numbers up to 10 digits

    long long best = -1;
    for (auto x : luckyNumbers)
    {
        if (sumDig(x) == n)
        {
            if (best == -1 || x < best)
                best = x;
        }
    }
    cout << best << endl;
    return 0;
}