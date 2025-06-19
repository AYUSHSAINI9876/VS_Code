#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--){
        long long a,b;
        cin >> a >> b;
        long long x = a & b;
        cout << ((a ^ x) + (b ^ x)) << endl;
    }
    return 0;
}