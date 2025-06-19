#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    if (n < 2) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;       
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}

int main()
{
    int n,m;
    cin >> n >> m;
    int next = n + 1;
    while (!isPrime(next)) {
        next++;
    }
    if(next==m){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}