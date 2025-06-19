#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[5];
    for (int i = 1; i <= 4; i++) {
        cin >> arr[i];
    }
    string s;
    cin >> s;
    long long sum = 0;
    for (char c : s) {
        int strip = c - '0'; 
        sum += arr[strip];
    }
    cout << sum << endl;
}