#include <bits/stdc++.h>
using namespace std;

int main() {
   int t;
   cin >> t;
   while(t--){
    long long n;
    cin >> n;
    long long total=n*(n+1)/2;
    long long sum=0;
    for(long long i=1;i<=n;i*=2){
        sum+=i;
    }
    cout << total-2*sum << endl;
   }
    return 0;
}