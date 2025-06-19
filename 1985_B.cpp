#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int maxi=0;
        for(int x=2;x<=n;x++){
            maxi=max(maxi,n*(n+x)/(2*x));
        }
        cout << n*n/(2*maxi-n) << endl;
    }
    return 0;
}