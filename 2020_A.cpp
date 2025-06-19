#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--){
        long long n,k;
        cin >> n >> k;
        if (k == 1) {
            cout << n << '\n';
            continue;
        }
        int count=0;
        while(n!=0){
            count+=(n%k);
            n/=k;
        }
        cout << count << endl;
    }
    return 0;
}