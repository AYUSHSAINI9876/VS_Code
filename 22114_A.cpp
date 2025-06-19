#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int x = stoi(s);
        bool found = false;

        for (int i = 0; i <= 200; i++) {
            if (i*i == x) {
                for (int j = 0; j <= i; j++) {
                    int b = i - j;
                    if (j >= 0 && b >= 0) {
                        cout << j << " " << b << endl;
                        found = true;
                        break;
                    }
                }
                break;
            }
        }
        if (!found){
            cout << -1 << endl;
        }
    }
    return 0;
}
