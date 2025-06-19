#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    long long evenCount = n / 2;
    long long oddCount = (n + 1) / 2;
    long long sum1 = evenCount * (evenCount + 1);  
    long long sum2 = oddCount * oddCount;   
    cout << sum1-sum2; 
    return 0;
}