#include <bits/stdc++.h>
using namespace std;

int main() {
    int p;
    cin >> p;
    int count=0;
    for(int g=1;g<p;g++){
        set<int> residues;
        int val = 1;
        for (int i = 1; i < p; i++) {
            val = (1LL * val * g) % p;
            residues.insert(val);
        }
        if ((int)residues.size() == p - 1) {
            count++;
            // cout << g << " is a primitive root\n"; // Uncomment to see them
        }
    }
    cout << count << endl;
    return 0;
}