#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;  
    while(t--){
        long long a,b,c,x,y;
        cin >> a >> b >> c >> x >> y;
        long long maxi = 0LL;
        long long dog = max(maxi, x - a);  
        long long cat = max(maxi, y - b); 
        if (dog + cat <= c)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}