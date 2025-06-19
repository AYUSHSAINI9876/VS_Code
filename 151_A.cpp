#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,l,c,d,p,nl,np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int x=k*l/(n*nl);
    int y=c*d/n;
    int z=p/(n*np);
    cout << min({x,y,z});
    return 0;
}