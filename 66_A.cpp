#include <bits/stdc++.h>
using namespace std;

bool compare(const string &a, const string &b) {
    if (a.size() != b.size()){
        return a.size() < b.size();
    }
    return a <= b;
}

int main() {
    string n;
    cin >> n;
    if (compare(n, "127")){
        cout << "byte" << endl;
    }
    else if (compare(n, "32767")){
        cout << "short" << endl;
    }
    else if (compare(n, "2147483647")){
        cout << "int" << endl;
    }
    else if (compare(n, "9223372036854775807")){
        cout << "long" << endl;
    }
    else{
        cout << "BigInteger" << endl;
    }
    return 0;
}