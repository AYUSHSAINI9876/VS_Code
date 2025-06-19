#include <bits/stdc++.h>
using namespace std;

// long long sumDigs(long long n){
//     long long sum=0;
//     while(n>0){
//         sum+=(n%10);
//         n/=10;
//     }
//     return sum;
// }

int main() {
    int t;
    cin >> t;  
    while (t--) {
        long long n;
        cin >> n;
        // long long count=0;
        // for(long long i=1;i<=n;i++){
            // if(sumDigs(i+1)<sumDigs(i)){
            //     count++;
            // }
        // }
        int count = n / 10;
        if (n % 10 == 9) count++;
        cout << count << endl;
    }
    return 0;
}