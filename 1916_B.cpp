#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        long long a,b;
        cin >> a >> b;
        if(b%a==0){
            cout << b*b/a << endl;
        }
        else{
            cout << a*b/(__gcd(a,b)) << endl;
        }
    }
    return 0;
}