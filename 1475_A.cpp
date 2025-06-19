#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        bool found=false;
        if (n > 1 && (n % 2 == 1 || (n & (n - 1)) != 0)) {
            found = true;
        }
        if(found){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}