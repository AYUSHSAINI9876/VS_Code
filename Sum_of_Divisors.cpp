#include <bits/stdc++.h>
using namespace std;

long long countDivisors(long long n){
    long long count=0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            count++;
        }
    }
    return count;
}
int main() {
    long long n;
    cin >> n;
    long long sum=0;
    for(long long k=1;k<=n;k++){
        long long m = n / k;
        sum += k * m * (m + 1) / 2;
    }
    cout << sum << endl;
    return 0;
}