#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a,b;
        cin >> a >> b;
        int maxi=INT_MIN;
        for(int c=a;c<=b;c++){
            maxi=max(maxi,b-a);
        }
        cout << maxi << endl;
    }
    return 0;
}