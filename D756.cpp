#include <bits/stdc++.h>
using namespace std;

const int MAX = 1e6 + 1;

// long long fact(int n){
//     if(n==0 || n==1){
//         return 1;
//     }
//     return n*fact(n-1);
// }
bool countDivisors(long long n){
    long long count=0;
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            count++;
        }
    }
    return count==75;
}
int main() {
    int n;
    cin >> n;
    int cnt=0;
    for(int i=1;i<=n;i++){
        if(countDivisors(i)){
            cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}