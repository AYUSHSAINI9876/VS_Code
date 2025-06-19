#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int count = 0;
        for(char c : s) {
            if(c == '1') count++;
        }

        // Each 0 becomes 1 once -> (n - count1)
        // Each 1 stays 1 in (n - 1) rows (since flipped once)
        int result = (n - count) + count * (n - 1);
        cout << result << endl;
    }
    return 0;
}