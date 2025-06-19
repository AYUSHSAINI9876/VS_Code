#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a1,a2,a4,a5;
        cin >> a1 >> a2 >> a4 >> a5;
        int x=a1+a2;
        int y=a4-a2;
        int z=a5-a4;
        int maxi=0;
        for(int a3:{x,y,z}){
            int count = 0;
            if (a3 == a1 + a2) count++;     // i = 1
            if (a4 == a2 + a3) count++;     // i = 2
            if (a5 == a3 + a4) count++;     // i = 3
            maxi = max(maxi, count);
        }
        cout << maxi << endl;
    } 
    return 0;
}