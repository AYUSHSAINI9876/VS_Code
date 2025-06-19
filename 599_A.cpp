#include <bits/stdc++.h>
using namespace std;

int main() {
    int d1,d2,d3;
    cin >> d1 >> d2 >> d3;
    int maxi=d1+d2+d3;
    int x=2*(d1+d2);
    int y=2*(d3+d2);
    int z=2*(d1+d3);
    cout << min({x,y,z,maxi});
    return 0;
}