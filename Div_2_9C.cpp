#include <bits/stdc++.h>
using namespace std;

// bool Digs(long long n)
// {
//     vector<int> digits;
//     while (n > 0)
//     {
//         int digit = n % 10;
//         if (digit != 0 && digit != 1)
//         {
//             return false;
//         }
//         n /= 10;
//     }
//     return true;
// }

int main()
{
    long long n;
    cin >> n;
    // long long count = 0;
    // for (long long i = 1; i <= n; i++)
    // {
    //     if (Digs(i))
    //     {
    //         count++;
    //     }
    // }
    // cout << count << endl;
    queue<long long> q;
    q.push(1);
    int count=0;
    while (!q.empty()) {
        long long curr = q.front();
        q.pop();
        if (curr > n)continue;
        count++;
        q.push(curr*10);     
        q.push(curr*10+1); 
    }
    cout << count << endl;
    return 0;
}