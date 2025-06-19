#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, m, a;
    cin >> n >> m >> a;
    long long tiles_length,tiles_width;
    if (n % a == 0){
        tiles_length = n / a;
    }
    else{
        tiles_length = (n / a) + 1;
    }
    if (m % a == 0){
        tiles_width = m / a;
    }
    else{
        tiles_width = (m / a) + 1;
    }
    cout << tiles_length * tiles_width << endl;
    return 0;
}