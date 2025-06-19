#include <bits/stdc++.h>
using namespace std;

long long sumdigs(long long n){
    long long sum=0;
    while(n>0){
        sum+=(n%10);
        n/=10;
    }
    return sum;
}

long long gcd(long long a,long long b){
    while (b != 0) {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int main()
{
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        while(gcd(n, sumdigs(n)) == 1) {
            n++;
        }
        cout << n << endl;
    }
    return 0;
}