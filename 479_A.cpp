#include <bits/stdc++.h>
using namespace std;

int main() {
    int x,y,z;
    cin >> x >> y >> z;
    int a=x+(y*z);
    int b=x*(y+z);
    int c=x*y*z;
    int d=(x+y)*z;
    int e = x + y + z; 
    int f = (x * y) + z;
    cout << max({a,b,c,d,e,f});
    return 0;
}