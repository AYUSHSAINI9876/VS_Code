#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--){
        int a,b,c;
        cin >> a >> b >> c;
        int Xor=0;
        Xor^=(a^b^c);
        cout << Xor << endl;
    }
    return 0;
}