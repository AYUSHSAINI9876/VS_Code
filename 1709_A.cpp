#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int x;
        cin >> x;
        int doors[4]; 
        for (int i = 1; i <= 3; i++) {
            cin >> doors[i]; // key behind each door
        }
        int next_key = doors[x];
        if (next_key == 0) {
            cout << "NO" << endl;
            continue;
        }
        int last_key = doors[next_key];
        if (last_key == 0) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
    return 0;
}